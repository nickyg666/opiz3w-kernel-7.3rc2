/* SPDX-License-Identifier: GPL-2.0-or-later */
/* Copyright(c) 2020 - 2023 Allwinner Technology Co.,Ltd. All rights reserved. */
/*
 * (C) Copyright 2007-2013
 * Reuuimlla Technology Co., Ltd. <www.reuuimllatech.com>
 * Aaron.Maoye <leafy.myeh@reuuimllatech.com>
 *
 * Driver of Allwinner UART controller.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * 2013.6.6 Mintow <duanmintao@allwinnertech.com>
 *    Adapt to support sun8i/sun9i of Allwinner.
 */

#include <sunxi-log.h>
#if defined(CONFIG_AW_SERIAL_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#endif

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/io.h>
#include <linux/irq.h>
#include <linux/clk.h>
#include <linux/gpio.h>
#include <linux/of_gpio.h>
#include <linux/delay.h>
#include <linux/ctype.h>
#include <linux/slab.h>
#include <linux/proc_fs.h>
#include <linux/platform_device.h>
#include <linux/pinctrl/consumer.h>

#include <linux/console.h>
#include <linux/tty.h>
#include <linux/tty_flip.h>
#include <linux/serial_core.h>
#include <linux/serial.h>

#include <linux/clk.h>
#include <linux/clk-provider.h>

#include <linux/dmaengine.h>
#include <linux/dma-mapping.h>

#include <linux/of.h>
#include <linux/of_irq.h>
#include <linux/of_address.h>
#include <linux/version.h>
#include <linux/hrtimer.h>
#include <linux/ktime.h>
#include "sunxi-uart.h"

/* #define CONFIG_SW_UART_DUMP_DATA */
/*
 * ********************* Note **********************
 * CONFIG_SW_UART_DUMP_DATA may cause some problems
 * with some commands of 'dmesg', 'logcat', and
 * 'cat /proc/kmsg' in the console.
 */

#define SERIAL_DBG(dev, fmt, ...) \
	dev_dbg(dev, "%s: " fmt, __func__, ##__VA_ARGS__)
#define SERIAL_DUMP(sw_uport, tag) \
	serial_dbg(sw_uport, tag)

#define SERIAL_DUMP_HEX(sw_uport, buf, len, tag) \
	serial_dump(sw_uport, buf, len, tag)

#define SERIAL_CIRC_CNT_TO_END(head, tail, size) \
	CIRC_CNT_TO_END(head, tail, size)

static void sw_uart_enable_ier_thri(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);

	sw_uport->ier |= SUNXI_UART_IER_THRE;
	serial_out(port, sw_uport->ier, SUNXI_UART_IER);
}

static void sw_uart_disable_ier_thri(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);

	sw_uport->ier &= ~SUNXI_UART_IER_THRE;
	serial_out(port, sw_uport->ier, SUNXI_UART_IER);
}

static void sw_uart_enable_ier_rlsi(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);

	sw_uport->ier |= SUNXI_UART_IER_RLSI;
	serial_out(port, sw_uport->ier, SUNXI_UART_IER);
}

static void sw_uart_disable_ier_rlsi(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);

	sw_uport->ier &= ~SUNXI_UART_IER_RLSI;
	serial_out(port, sw_uport->ier, SUNXI_UART_IER);
}

static void sw_uart_enable_ier_rda(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);

	sw_uport->ier |= SUNXI_UART_IER_RDA;
	serial_out(port, sw_uport->ier, SUNXI_UART_IER);
}

static void sw_uart_disable_ier_rda(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);

	sw_uport->ier &= ~SUNXI_UART_IER_RDA;
	serial_out(port, sw_uport->ier, SUNXI_UART_IER);
}

static void sw_uart_stop_tx(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);
	struct tty_port *tport = &port->state->port;

	if (sw_uport->rs485_en) {
		if ((sw_uport->port.x_char) && (kfifo_is_empty(&tport->xmit_fifo)))
			return;
		gpiod_set_value(sw_uport->rs485oe_gpio, sw_uport->rs485_fl);
	}
	sw_uart_disable_ier_thri(port);
}

static void sw_uart_start_tx(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);
	struct tty_port *tport = &port->state->port;

	if (sw_uport->rs485_en) {
		if ((sw_uport->port.x_char) && (kfifo_is_empty(&tport->xmit_fifo)))
			return;
		gpiod_set_value(sw_uport->rs485oe_gpio, !sw_uport->rs485_fl);
	}
#if IS_ENABLED(CONFIG_AW_SERIAL_DMA)
	if (!((sw_uport->dma->use_dma & TX_DMA) && sw_uport->dma->tx_dma_used))
#endif
		sw_uart_enable_ier_thri(port);
}

static void sw_uart_handle_tx(struct sw_uart_port *sw_uport)
{
	struct tty_port *tport = &sw_uport->port.state->port;
	int count;

	if (sw_uport->port.x_char) {
		serial_out(&sw_uport->port, sw_uport->port.x_char, SUNXI_UART_THR);
		sw_uport->port.icount.tx++;
		sw_uport->port.x_char = 0;
#if IS_ENABLED(CONFIG_SW_UART_DUMP_DATA)
		sw_uport->dump_buff[sw_uport->dump_len++] = sw_uport->port.x_char;
		SERIAL_DUMP(sw_uport, "Tx");
#endif
		return;
	}
	if (kfifo_is_empty(&tport->xmit_fifo) || uart_tx_stopped(&sw_uport->port)) {
		sw_uart_stop_tx(&sw_uport->port);
		return;
	}

#if IS_ENABLED(CONFIG_AW_SERIAL_DMA)
	if (sw_uport->dma->use_dma & TX_DMA) {
		if (kfifo_len(&tport->xmit_fifo) >= (sw_uport->port.fifosize / 2)) {
			sw_uart_start_dma_tx(sw_uport);
			return;
		}
	}
#endif

	count = sw_uport->port.fifosize / 2;
	do {
		unsigned char ch;

		if (kfifo_get(&tport->xmit_fifo, &ch) == 0)
			break;

#if IS_ENABLED(CONFIG_SW_UART_DUMP_DATA)
		sw_uport->dump_buff[sw_uport->dump_len++] = ch;
#endif
		serial_out(&sw_uport->port, ch, SUNXI_UART_THR);
		SERIAL_DBG(sw_uport->port.dev, "write tx fifo 0x%x\n", ch);
		sw_uport->port.icount.tx++;

		if (kfifo_is_empty(&tport->xmit_fifo))
			break;
	} while (--count > 0);

	SERIAL_DUMP(sw_uport, "Tx");
	if (kfifo_len(&tport->xmit_fifo) < WAKEUP_CHARS) {
		spin_unlock(&sw_uport->port.lock);
		uart_write_wakeup(&sw_uport->port);
		spin_lock(&sw_uport->port.lock);
	}

	if (sw_uport->rs485_en)
		return;

	if (kfifo_is_empty(&tport->xmit_fifo))
		sw_uart_stop_tx(&sw_uport->port);
}

static void sw_uart_handle_rx(struct sw_uart_port *sw_uport)
{
	unsigned int iir, lsr, ch, flag;
	unsigned int max_count = 256;

	do {
		lsr = serial_in(&sw_uport->port, SUNXI_UART_LSR);
		if (!(lsr & SUNXI_UART_LSR_DR))
			break;

		ch = serial_in(&sw_uport->port, SUNXI_UART_RBR);
		flag = TTY_NORMAL;
		sw_uport->port.icount.rx++;

#if IS_ENABLED(CONFIG_SW_UART_DUMP_DATA)
		sw_uport->dump_buff[sw_uport->dump_len++] = ch;
		SERIAL_DUMP(sw_uport, "Rx");
#endif

		if (lsr & SUNXI_UART_LSR_BI) {
			lsr &= ~(SUNXI_UART_LSR_FE | SUNXI_UART_LSR_PE);
			sw_uport->port.icount.brk++;
			if (uart_handle_break(&sw_uport->port))
				continue;
		} else if (lsr & SUNXI_UART_LSR_PE) {
			sw_uport->port.icount.parity++;
		} else if (lsr & SUNXI_UART_LSR_FE) {
			sw_uport->port.icount.frame++;
		}
		if (lsr & (SUNXI_UART_LSR_BI | SUNXI_UART_LSR_PE | SUNXI_UART_LSR_FE)) {
			lsr &= SUNXI_UART_LSR_BI | SUNXI_UART_LSR_PE | SUNXI_UART_LSR_FE;
			if (lsr & SUNXI_UART_LSR_BI)
				flag = TTY_BREAK;
			else if (lsr & SUNXI_UART_LSR_PE)
				flag = TTY_PARITY;
			else if (lsr & SUNXI_UART_LSR_FE)
				flag = TTY_FRAME;
		}

		uart_insert_char(&sw_uport->port, lsr, SUNXI_UART_LSR_OE, ch, flag);

		if (!max_count--)
			break;
	} while (1);

	spin_unlock(&sw_uport->port.lock);
	tty_flip_buffer_push(&sw_uport->port.state->port);
	spin_lock(&sw_uport->port.lock);
}

static void sw_uart_handle_status(struct sw_uart_port *sw_uport)
{
	unsigned int lsr, status;

	lsr = serial_in(&sw_uport->port, SUNXI_UART_LSR);
	status = lsr & (SUNXI_UART_LSR_OE | SUNXI_UART_LSR_PE | SUNXI_UART_LSR_FE | SUNXI_UART_LSR_BI);

	if (status) {
		if (status & SUNXI_UART_LSR_OE)
			sw_uport->port.icount.overrun++;
		if (status & SUNXI_UART_LSR_PE)
			sw_uport->port.icount.parity++;
		if (status & SUNXI_UART_LSR_FE)
			sw_uport->port.icount.frame++;
		if (status & SUNXI_UART_LSR_BI)
			sw_uport->port.icount.brk++;

		spin_unlock(&sw_uport->port.lock);
		uart_handle_sysrq_char(&sw_uport->port, 0);
		spin_lock(&sw_uport->port.lock);
	}
}

static irqreturn_t sw_uart_irq(int irq, void *dev_id)
{
	struct uart_port *port = dev_id;
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);
	unsigned int iir, lsr;
	unsigned int handled = 0;

	spin_lock(&port->lock);

	iir = serial_in(port, SUNXI_UART_IIR);
	if (iir & SUNXI_UART_IIR_NO_INT) {
		spin_unlock(&port->lock);
		return IRQ_NONE;
	}

	SERIAL_DBG(port->dev, "IIR: 0x%x\n", iir);

	switch (iir & SUNXI_UART_IIR_ID) {
	case SUNXI_UART_IIR_THRI:
		sw_uart_handle_tx(sw_uport);
		handled = 1;
		break;
	case SUNXI_UART_IIR_RDA:
	case SUNXI_UART_IIR_CTI:
		sw_uart_handle_rx(sw_uport);
		handled = 1;
		break;
	case SUNXI_UART_IIR_RLSI:
		sw_uart_handle_status(sw_uport);
		handled = 1;
		break;
	default:
		lsr = serial_in(port, SUNXI_UART_LSR);
		SERIAL_DBG(port->dev, "unknown IIR: 0x%x, LSR: 0x%x\n", iir, lsr);
		break;
	}

	spin_unlock(&port->lock);

	return IRQ_RETVAL(handled);
}

static unsigned int sw_uart_tx_empty(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);
	unsigned int lsr = serial_in(port, SUNXI_UART_LSR);

	if (sw_uport->dma && (sw_uport->dma->use_dma & TX_DMA)) {
#if IS_ENABLED(CONFIG_AW_SERIAL_DMA)
		if (sw_uport->dma->tx_dma_used)
			return 0;
#endif
	}

	return (lsr & SUNXI_UART_LSR_TEMT) ? TIOCSER_TEMT : 0;
}

static unsigned int sw_uart_get_mctrl(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);

	return sw_uport->mctrl;
}

static void sw_uart_set_mctrl(struct uart_port *port, unsigned int mctrl)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);
	unsigned int old_mctrl = sw_uport->mctrl;
	unsigned int msr = 0;

	sw_uport->mctrl = mctrl;

	if (mctrl & TIOCM_RTS)
		msr |= SUNXI_UART_MCR_RTS;
	if (mctrl & TIOCM_DTR)
		msr |= SUNXI_UART_MCR_DTR;
	if (mctrl & TIOCM_OUT1)
		msr |= SUNXI_UART_MCR_OUT1;
	if (mctrl & TIOCM_OUT2)
		msr |= SUNXI_UART_MCR_OUT2;

	if (msr != old_mctrl)
		serial_out(port, msr, SUNXI_UART_MCR);
}

static void sw_uart_break_ctl(struct uart_port *port, int break_state)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);
	unsigned int lcr;

	lcr = serial_in(port, SUNXI_UART_LCR);
	if (break_state)
		lcr |= SUNXI_UART_LCR_SBC;
	else
		lcr &= ~SUNXI_UART_LCR_SBC;
	serial_out(port, lcr, SUNXI_UART_LCR);
}

/* DMA TX functions */
static void sw_uart_release_dma_tx(struct sw_uart_port *sw_uport)
{
	struct sw_uart_dma *uart_dma = sw_uport->dma;

	if (uart_dma && uart_dma->tx_dma_inited) {
		sw_uart_stop_dma_tx(sw_uport);
		dma_free_coherent(sw_uport->port.dev, sw_uport->dma->tb_size,
				  sw_uport->dma->tx_buffer, sw_uport->dma->tx_phy_addr);
		dma_release_channel(uart_dma->dma_chan_tx);
		uart_dma->dma_chan_tx = NULL;
		uart_dma->tx_dma_inited = 0;
	}
}

static int sw_uart_init_dma_tx(struct sw_uart_port *sw_uport)
{
	struct dma_slave_config slave_config;
	struct uart_port *port = &sw_uport->port;
	struct sw_uart_dma *uart_dma = sw_uport->dma;
	int ret;

	if (!uart_dma) {
		sunxi_info(sw_uport->port.dev, "sw_uart_init_dma_tx fail\n");
		return -1;
	}

	if (uart_dma->tx_dma_inited)
		return 0;

	uart_dma->dma_chan_tx = dma_request_chan(sw_uport->port.dev, "tx");
	if (!uart_dma->dma_chan_tx) {
		sunxi_err(port->dev, "cannot get the TX DMA channel!\n");
		ret = -EINVAL;
	}

	slave_config.direction = DMA_MEM_TO_DEV;
	slave_config.dst_addr = port->mapbase + SUNXI_UART_THR;
	slave_config.src_addr_width = DMA_SLAVE_BUSWIDTH_1_BYTE;
	slave_config.dst_addr_width = DMA_SLAVE_BUSWIDTH_1_BYTE;
	slave_config.src_maxburst = 1;
	slave_config.dst_maxburst = 1;
	ret = dmaengine_slave_config(uart_dma->dma_chan_tx, &slave_config);
	if (ret) {
		sunxi_err(port->dev, "error in TX dma configuration.");
		return ret;
	}

	uart_dma->tx_dma_inited = 1;
	sunxi_info(port->dev, "sw_uart_init_dma_tx sucess\n");
	return 0;
}

static void dma_tx_callback(void *data)
{
	struct uart_port *port = data;
	struct sw_uart_port *sw_uport = container_of(port,
						     struct sw_uart_port, port);
	struct tty_port *tport = &port->state->port;
	struct sw_uart_dma *uart_dma = sw_uport->dma;
	struct scatterlist *sgl = &uart_dma->tx_sgl;
	unsigned long flags;

	spin_lock_irqsave(&port->lock, flags);
	dma_unmap_sg(sw_uport->port.dev, sgl, 1, DMA_TO_DEVICE);

	kfifo_skip_count(&tport->xmit_fifo, uart_dma->tx_bytes);
	port->icount.tx += uart_dma->tx_bytes;
	if (kfifo_len(&tport->xmit_fifo) < WAKEUP_CHARS)
		uart_write_wakeup(port);

	sw_uart_enable_ier_thri(port);
	uart_dma->tx_dma_used = 0;

	spin_unlock_irqrestore(&port->lock, flags);
}

static int sw_uart_start_dma_tx(struct sw_uart_port *sw_uport)
{
	int count = 0;
	struct uart_port *port = &sw_uport->port;
	struct tty_port *tport = &port->state->port;
	struct sw_uart_dma *uart_dma = sw_uport->dma;
	struct scatterlist *sgl = &uart_dma->tx_sgl;
	struct dma_async_tx_descriptor *desc;
	int ret;

	if (!uart_dma->use_dma)
		goto err_out;

	if (-1 == sw_uart_init_dma_tx(sw_uport))
		goto err_out;

	if (1 == uart_dma->tx_dma_used)
		return 1;

	uart_dma->tx_dma_used = 1;
	isb();
	/**********************************/
	/* mask the stop now */
	sw_uart_disable_ier_thri(port);

	count = kfifo_len(&tport->xmit_fifo);
	uart_dma->tx_bytes = count;
	sg_init_one(sgl, phys_to_virt(uart_dma->tx_phy_addr) + kfifo_off(&tport->xmit_fifo), count);
	ret = dma_map_sg(port->dev, sgl, 1, DMA_TO_DEVICE);

	if (ret == 0) {
		sunxi_err(port->dev, "DMA mapping failed\n");
		goto err_out;
	}

	desc = dmaengine_prep_slave_sg(uart_dma->dma_chan_tx, sgl, 1,
				       DMA_MEM_TO_DEV, DMA_PREP_INTERRUPT);
	if (!desc) {
		sunxi_err(port->dev, "get tx dma descriptor failed!\n");
		goto err_out;
	}

	desc->callback = dma_tx_callback;
	desc->callback_param = port;
	uart_dma->tx_cookie = dmaengine_submit(desc);
	dma_async_issue_pending(uart_dma->dma_chan_tx);

	return 1;

err_out:
	uart_dma->tx_dma_used = 0;
	return 0;
}

static void sw_uart_stop_dma_tx(struct sw_uart_port *sw_uport)
{
	struct sw_uart_dma *uart_dma = sw_uport->dma;

	if (uart_dma && uart_dma->tx_dma_used) {
		dmaengine_terminate_all(uart_dma->dma_chan_tx);
		uart_dma->tx_dma_used = 0;
	}
}

/* DMA RX functions */
static void sw_uart_stop_dma_rx(struct sw_uart_port *sw_uport)
{
	struct sw_uart_dma *uart_dma = sw_uport->dma;

	if (uart_dma && uart_dma->rx_dma_used) {
		hrtimer_cancel(&sw_uport->rx_hrtimer);
		dmaengine_terminate_all(uart_dma->dma_chan_rx);
		uart_dma->rb_tail = 0;
		uart_dma->rx_dma_used = 0;
	}
}

static void sw_uart_release_dma_rx(struct sw_uart_port *sw_uport)
{
	struct sw_uart_dma *uart_dma = sw_uport->dma;

	if (uart_dma && uart_dma->rx_dma_inited) {
		sw_uart_stop_dma_rx(sw_uport);
		dma_free_coherent(sw_uport->port.dev, sw_uport->dma->rb_size,
				  sw_uport->dma->rx_buffer, sw_uport->dma->rx_phy_addr);
		dma_release_channel(uart_dma->dma_chan_rx);
		uart_dma->dma_chan_rx = NULL;
		uart_dma->rx_dma_inited = 0;
	}
}

static int sw_uart_init_dma_rx(struct sw_uart_port *sw_uport)
{
	int ret;
	struct uart_port *port = &sw_uport->port;
	struct dma_slave_config slave_config;
	struct sw_uart_dma *uart_dma = sw_uport->dma;

	if (!uart_dma) {
		sunxi_info(port->dev, "sw_uart_init_dma_rx: port fail\n");
		return -1;
	}

	if (uart_dma->rx_dma_inited)
		return 0;

	uart_dma->dma_chan_rx = dma_request_chan(sw_uport->port.dev, "rx");
	if (!uart_dma->dma_chan_rx) {
		sunxi_err(port->dev, "cannot get the DMA channel.\n");
		return -1;
	}

	slave_config.direction = DMA_DEV_TO_MEM;
	slave_config.src_addr_width = DMA_SLAVE_BUSWIDTH_1_BYTE;
	slave_config.dst_addr_width = DMA_SLAVE_BUSWIDTH_1_BYTE;
	slave_config.src_maxburst = 1;
	slave_config.dst_maxburst = 1;
	slave_config.src_addr = port->mapbase + SUNXI_UART_RBR;

	ret = dmaengine_slave_config(uart_dma->dma_chan_rx, &slave_config);
	if (ret) {
		sunxi_err(port->dev, "error in RX dma configuration.\n");
		return ret;
	}

	uart_dma->rx_dma_inited = 1;
	sunxi_info(port->dev, "sw_uart_init_dma_rx sucess\n");
	return 0;
}

static int sw_uart_start_dma_rx(struct sw_uart_port *sw_uport)
{
	struct uart_port *port = &sw_uport->port;
	struct sw_uart_dma *uart_dma = sw_uport->dma;
	struct dma_async_tx_descriptor *desc;

	if (!uart_dma->use_dma)
		return 0;

	if (uart_dma->rx_dma_used == 1)
		return 0;

	if (-1 == sw_uart_init_dma_rx(sw_uport)) {
		sunxi_info(sw_uport->port.dev, "sw_uart_init_dma_rx error!\n");
		return -1;
	}
	desc = dmaengine_prep_dma_cyclic(uart_dma->dma_chan_rx,
					 uart_dma->rx_phy_addr, uart_dma->rb_size, 1,
					 DMA_DEV_TO_MEM, DMA_PREP_INTERRUPT);

	if (!desc) {
		sunxi_err(port->dev, "get rx dma descriptor failed!\n");
		return -EINVAL;
	}

	SERIAL_DBG(port->dev, "RX: prepare for the DMA.\n");
	uart_dma->rx_cookie = dmaengine_submit(desc);
	dma_async_issue_pending(uart_dma->dma_chan_rx);

	uart_dma->rx_dma_used = 1;
	if (uart_dma->use_timer == 1) {
		hrtimer_start(&sw_uport->rx_hrtimer,
			      ns_to_ktime(uart_dma->rx_timeout), HRTIMER_MODE_REL);
	}
	return 1;
}

static void sw_uart_update_rb_addr(struct sw_uart_port *sw_uport)
{
	struct sw_uart_dma *uart_dma = sw_uport->dma;
	struct dma_tx_state state;
	uart_dma->rx_size = 0;
	if (uart_dma->rx_dma_used == 1) {
		dmaengine_tx_status(uart_dma->dma_chan_rx, uart_dma->rx_cookie,
				    &state);
		if ((uart_dma->rb_size - state.residue) !=
		    sw_uport->rx_last_pos) {
			uart_dma->rb_head = uart_dma->rb_size - state.residue;
			sw_uport->rx_last_pos = uart_dma->rb_head;
		}
	}
}

static enum hrtimer_restart sw_uart_report_dma_rx(struct hrtimer *rx_hrtimer)
{
	int count, flip = 0;
	struct sw_uart_port *sw_uport = container_of(rx_hrtimer,
						     struct sw_uart_port, rx_hrtimer);
	struct uart_port *port = &sw_uport->port;
	struct sw_uart_dma *uart_dma = sw_uport->dma;

	if (!uart_dma->rx_dma_used || !port->state->port.tty)
		return HRTIMER_NORESTART;

	sw_uart_update_rb_addr(sw_uport);
	while (1) {
		count = CIRC_CNT_TO_END(uart_dma->rb_head, uart_dma->rb_tail,
					uart_dma->rb_size);
		if (count <= 0)
			break;
		port->icount.rx += count;
		flip = tty_insert_flip_string(&port->state->port,
					      uart_dma->rx_buffer + uart_dma->rb_tail, count);
		tty_flip_buffer_push(&port->state->port);
		uart_dma->rb_tail =
			(uart_dma->rb_tail + count) & (uart_dma->rb_size - 1);
	}

	if (uart_dma->use_timer == 1) {
		hrtimer_forward_now(&sw_uport->rx_hrtimer,
				    ns_to_ktime(uart_dma->rx_timeout));
	}

	return HRTIMER_RESTART;
}

static int sw_uart_startup(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);
	int ret;

	ret = request_irq(port->irq, sw_uart_irq, IRQF_SHARED, "sw_uart", port);
	if (ret) {
		sunxi_err(port->dev, "cannot request IRQ %d\n", port->irq);
		return ret;
	}

	sw_uart_config_rs485(port, &sw_uport->rs485conf);
	sw_uart_enable_ier_rda(port);
	sw_uart_enable_ier_rlsi(port);
	sw_uart_enable_ier_thri(port);

#if IS_ENABLED(CONFIG_AW_SERIAL_DMA)
	if (sw_uport->dma && (sw_uport->dma->use_dma & RX_DMA)) {
		ret = sw_uart_init_dma_rx(sw_uport);
		if (ret)
			sunxi_err(port->dev, "fail to init DMA RX\n");
	}
	if (sw_uport->dma && (sw_uport->dma->use_dma & TX_DMA)) {
		ret = sw_uart_init_dma_tx(sw_uport);
		if (ret)
			sunxi_err(port->dev, "fail to init DMA TX\n");
	}
#endif

	return 0;
}

static void sw_uart_shutdown(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);

	SERIAL_DBG(port->dev, "shut down ...\n");
#if IS_ENABLED(CONFIG_AW_SERIAL_DMA)
	if (sw_uport->dma && (sw_uport->dma->use_dma & TX_DMA))
		sw_uart_release_dma_tx(sw_uport);
	if (sw_uport->dma && (sw_uport->dma->use_dma & RX_DMA))
		sw_uart_release_dma_rx(sw_uport);
#endif

	sw_uport->ier = 0;
	sw_uport->lcr = 0;
	sw_uport->mcr = 0;
	sw_uport->fcr = 0;
	serial_out(port, sw_uport->ier, SUNXI_UART_IER);
	free_irq(port->irq, port);
}

static void sw_uart_flush_buffer(struct uart_port *port)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);

	SERIAL_DBG(port->dev, "flush buffer ...\n");
	spin_lock_irq(&port->lock);
	kfifo_reset(&port->state->port.xmit_fifo);
	spin_unlock_irq(&port->lock);
}

static void sw_uart_set_termios(struct uart_port *port, struct ktermios *termios,
			      struct ktermios *old)
{
	struct sw_uart_port *sw_uport = UART_TO_SPORT(port);
	unsigned int baud, quot, lcr, fcr, ier;

	baud = uart_get_baud_rate(port, termios, old, 0, port->uartclk / 16);
	quot = uart_get_divisor(port, baud);

	lcr = serial_in(port, SUNXI_UART_LCR);
	lcr &= ~(SUNXI_UART_LCR_PARITY | SUNXI_UART_LCR_STOP | SUNXI_UART_LCR_WLEN8);

	if (termios->c_cflag & CSTOPB)
		lcr |= SUNXI_UART_LCR_STOP;
	if (termios->c_cflag & PARENB) {
		lcr |= SUNXI_UART_LCR_PARITY;
		if (!(termios->c_cflag & PARODD))
			lcr |= SUNXI_UART_LCR_EPS;
	}
	if (termios->c_cflag & CSIZE) {
		switch (termios->c_cflag & CSIZE) {
		case CS5:
			lcr |= SUNXI_UART_LCR_WLEN5;
			break;
		case CS6:
			lcr |= SUNXI_UART_LCR_WLEN6;
			break;
		case CS7:
			lcr |= SUNXI_UART_LCR_WLEN7;
			break;
		case CS8:
			lcr |= SUNXI_UART_LCR_WLEN8;
			break;
		}
	}
	serial_out(port, lcr, SUNXI_UART_LCR);
	sw_uport->lcr = lcr;

	fcr = serial_in(port, SUNXI_UART_FCR);
	fcr &= ~(SUNXI_UART_FCR_RXTRIG | SUNXI_UART_FCR_TXTRIG);
	fcr |= SUNXI_UART_FCR_RXTRIG_1 | SUNXI_UART_FCR_TXTRIG_1;
	serial_out(port, fcr, SUNXI_UART_FCR);
	sw_uport->fcr = fcr;

	uart_update_timeout(port, termios->c_cflag, baud);

	ier = serial_in(port, SUNXI_UART_IER);
	if (termios->c_cflag & CRTSCTS) {
		ier |= SUNXI_UART_IER_RTS;
		sw_uport->mctrl |= TIOCM_RTS;
	} else {
		ier &= ~SUNXI_UART_IER_RTS;
		sw_uport->mctrl &= ~TIOCM_RTS;
	}
	serial_out(port, ier, SUNXI_UART_IER);
	sw_uport->ier = ier;

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(6, 0, 0))
	sw_uart_config_rs485(port, &port->state->port.tty->termios, &sw_uport->rs485conf);
#else
	sw_uart_config_rs485(port, &sw_uport->rs485conf);
#endif
}

static const char *sw_uart_type(struct uart_port *port)
{
	return "sunxi-uart";
}

static void sw_uart_release_port(struct uart_port *port)
{
}

static int sw_uart_request_port(struct uart_port *port)
{
	return 0;
}

static void sw_uart_config_port(struct uart_port *port, int flags)
{
	if (flags & UART_CONFIG_TYPE) {
		port->type = PORT_SUNXI;
		sw_uart_request_port(port);
	}
}

static int sw_uart_verify_port(struct uart_port *port, struct serial_struct *ser)
{
	return 0;
}

static int sw_uart_get_divisor(struct uart_port *port, unsigned int baud)
{
	return port->uartclk / (16 * baud);
}

static struct uart_ops sw_uart_ops = {
	.tx_empty	= sw_uart_tx_empty,
	.set_mctrl	= sw_uart_set_mctrl,
	.get_mctrl	= sw_uart_get_mctrl,
	.stop_tx	= sw_uart_stop_tx,
	.start_tx	= sw_uart_start_tx,
	.break_ctl	= sw_uart_break_ctl,
	.startup	= sw_uart_startup,
	.shutdown	= sw_uart_shutdown,
	.flush_buffer	= sw_uart_flush_buffer,
	.set_termios	= sw_uart_set_termios,
	.type		= sw_uart_type,
	.release_port	= sw_uart_release_port,
	.request_port	= sw_uart_request_port,
	.config_port	= sw_uart_config_port,
	.verify_port	= sw_uart_verify_port,
};

static int sw_uart_probe(struct platform_device *pdev)
{
	struct sw_uart_port *sw_uport;
	struct uart_port *port;
	struct resource *res;
	int ret;

	sw_uport = devm_kzalloc(&pdev->dev, sizeof(*sw_uport), GFP_KERNEL);
	if (!sw_uport)
		return -ENOMEM;

	port = &sw_uport->port;
	port->dev = &pdev->dev;
	port->ops = &sw_uart_ops;
	port->fifosize = 64;
	port->line = pdev->id;
	port->flags = UPF_BOOT_AUTOCONF;
	port->type = PORT_SUNXI;

	res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	if (!res)
		return -ENODEV;

	port->mapbase = res->start;
	port->membase = devm_ioremap_resource(&pdev->dev, res);
	if (IS_ERR(port->membase))
		return PTR_ERR(port->membase);

	port->irq = platform_get_irq(pdev, 0);
	if (port->irq < 0)
		return port->irq;

	port->uartclk = clk_get_rate(devm_clk_get(&pdev->dev, "bus"));
	if (IS_ERR_VALUE(port->uartclk))
		port->uartclk = 24000000;

	spin_lock_init(&port->lock);

#if IS_ENABLED(CONFIG_AW_SERIAL_DMA)
	sw_uport->dma = devm_kzalloc(&pdev->dev, sizeof(*sw_uport->dma), GFP_KERNEL);
	if (!sw_uport->dma)
		return -ENOMEM;

	sw_uport->dma->use_dma = 0;
	if (of_property_read_bool(pdev->dev.of_node, "dma-names")) {
		sw_uport->dma->use_dma = TX_DMA | RX_DMA;
	}
#endif

	platform_set_drvdata(pdev, sw_uport);

	ret = uart_add_one_port(&sw_uart_reg, port);
	if (ret)
		return ret;

	sunxi_info(&pdev->dev, "sunxi-uart probed: %pR, irq=%d, clk=%d\n",
		   res, port->irq, port->uartclk);

	return 0;
}

static int sw_uart_remove(struct platform_device *pdev)
{
	struct sw_uart_port *sw_uport = platform_get_drvdata(pdev);

	uart_remove_one_port(&sw_uart_reg, &sw_uport->port);
	return 0;
}

static const struct of_device_id sw_uart_of_match[] = {
	{ .compatible = "allwinner,sunxi-uart" },
	{ .compatible = "allwinner,sun8i-a23-uart" },
	{ .compatible = "allwinner,sun50i-a64-uart" },
	{ .compatible = "allwinner,sun60i-a733-uart" },
	{ }
};
MODULE_DEVICE_TABLE(of, sw_uart_of_match);

static struct platform_driver sw_uart_driver = {
	.probe = sw_uart_probe,
	.remove = sw_uart_remove,
	.driver = {
		.name = "sw_uart",
		.of_match_table = sw_uart_of_match,
	},
};

static struct uart_driver sw_uart_reg = {
	.owner = THIS_MODULE,
	.driver_name = "sw_uart",
	.dev_name = "ttyS",
	.major = 0,
	.minor = 0,
	.nr = 16,
};

module_platform_driver(sw_uart_driver);

MODULE_AUTHOR("Allwinner Technology Co., Ltd.");
MODULE_DESCRIPTION("Allwinner Sunxi UART Driver");
MODULE_LICENSE("GPL v2");