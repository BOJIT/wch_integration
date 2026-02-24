/**
 * @file main.c
 * @author James Bennion-Pedley
 * @brief Main entry point for application
 * @date 01/06/2025
 *
 * @copyright Copyright (c) 2025
 *
 */

/*--------------------------------- Includes ---------------------------------*/

#include <zephyr/device.h>
#include <zephyr/kernel.h>
#include <zephyr/sys/clock.h>
#include <zephyr/net/hostname.h>

#include <zephyr/logging/log.h>

/*---------------------------- Macros & Constants ----------------------------*/

LOG_MODULE_REGISTER(main, CONFIG_LOG_DEFAULT_LEVEL);

/*----------------------------------- State ----------------------------------*/

/*------------------------------ Private Functions ---------------------------*/

/*------------------------------- Public Functions ---------------------------*/

/*-------------------------------- Entry Point -------------------------------*/

int main(void)
{
	LOG_INF("Device Hostname: %s", net_hostname_get());

	int64_t target_ms = ((k_uptime_get() + MSEC_PER_SEC) / MSEC_PER_SEC) * MSEC_PER_SEC;
	while (1) {
		target_ms += MSEC_PER_SEC;
		k_sleep(K_TIMEOUT_ABS_MS(target_ms));
	}
}
