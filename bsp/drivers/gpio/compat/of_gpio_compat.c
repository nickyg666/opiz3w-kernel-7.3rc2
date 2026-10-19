#include <linux/gpio.h>
#include <linux/gpio/driver.h>
#include <linux/of_gpio.h>
#include <linux/fwnode.h>
#include <linux/gpio/consumer.h>

int of_get_named_gpio(const struct device_node *np, const char *propname, int index)
{
	struct fwnode_handle *fwnode = of_fwnode_handle(np);
	struct gpio_desc *desc;
	int ret = 0;

	if (!np || !propname)
		return -EINVAL;

	desc = fwnode_gpiod_get_index(fwnode, propname, index,
				      GPIOD_ASIS, NULL);
	if (IS_ERR(desc))
		return PTR_ERR(desc);

	ret = desc_to_gpio(desc);
	gpiod_put(desc);
	return ret;
}
EXPORT_SYMBOL_GPL(of_get_named_gpio);