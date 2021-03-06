/*
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <kernel.h>

#define I2C_ENABLED(idx)  (IS_ENABLED(CONFIG_I2C) && \
			   DT_HAS_NODE(DT_NODELABEL(i2c##idx)))

#define SPI_ENABLED(idx)  (IS_ENABLED(CONFIG_SPI) && \
			   DT_HAS_NODE(DT_NODELABEL(spi##idx)))

#define UART_ENABLED(idx) (IS_ENABLED(CONFIG_SERIAL) && \
			   (IS_ENABLED(CONFIG_SOC_SERIES_NRF53X) || \
			    IS_ENABLED(CONFIG_SOC_SERIES_NRF91X)) && \
			   DT_HAS_NODE(DT_NODELABEL(uart##idx)))

/*
 * In most Nordic SoCs, SPI and TWI peripherals with the same instance number
 * share certain resources and therefore cannot be used at the same time (in
 * nRF53 and nRF91 Series this limitation concerns UART peripherals as well).
 * In nRF52810 though, there are only single instances of these peripherals
 * and they are arranged in a different way, so this limitation does not apply.
 *
 * The build assertions below check if conflicting peripheral instances are not
 * enabled simultaneously.
 */

#define CHECK(idx) \
	!(I2C_ENABLED(idx) && SPI_ENABLED(idx)) && \
	!(I2C_ENABLED(idx) && UART_ENABLED(idx)) && \
	!(SPI_ENABLED(idx) && UART_ENABLED(idx))

#define MSG(idx) \
	"Only one of the following peripherals can be enabled: " \
	"SPI"#idx", SPIM"#idx", SPIS"#idx", TWI"#idx", TWIM"#idx", TWIS"#idx \
	IF_ENABLED(CONFIG_SOC_SERIES_NRF53X, (", UARTE"#idx)) \
	IF_ENABLED(CONFIG_SOC_SERIES_NRF91X, (", UARTE"#idx)) \
	". Check nodes with status \"okay\" in zephyr.dts."

#if !IS_ENABLED(CONFIG_SOC_NRF52810)
BUILD_ASSERT(CHECK(0), MSG(0));
#endif
BUILD_ASSERT(CHECK(1), MSG(1));
BUILD_ASSERT(CHECK(2), MSG(2));
BUILD_ASSERT(CHECK(3), MSG(3));
