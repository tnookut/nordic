/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 * 
 * Note: Tested on nRF52833 DK
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
/* STEP 3 - Include the header file of the I2C API */
#include <zephyr/drivers/i2c.h>
/* STEP 4.1 - Include the header file of printk() */
#include <zephyr/sys/printk.h>
/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1000

/* STEP 8 - Define the I2C slave device address and the addresses of relevant registers */


/* STEP 6 - Get the node identifier of the sensor */
#define I2C0_NODE DT_NODELABEL(ppg)

void main(void)
{

	printk("--- START ---\n\r");
	int ret;

/* STEP 7 - Retrieve the API-specific device structure and make sure that the device is ready to use  */
	static const struct i2c_dt_spec ppg_slave = I2C_DT_SPEC_GET(I2C0_NODE);
	if (!device_is_ready(ppg_slave.bus)) {
		printk("I2C bus %s is nor ready!\n\r", ppg_slave.bus->name);
		return;
	}
	printk("Slave ready for communication!\n\r");

/* STEP 9 - Setup the sensor by writing the value 0x8C to the Configuration register */


	while (1) {
/* STEP 10 - Read the temperature from the sensor */


/* STEP 11 - Convert the two bytes to a 12-bits */

		k_msleep(SLEEP_TIME_MS);
	}
}
