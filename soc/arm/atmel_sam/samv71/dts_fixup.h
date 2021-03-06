/*
 * Copyright (c) 2019 Gerson Fernando Budke
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* This file is a temporary workaround for mapping of the generated information
 * to the current driver definitions.  This will be removed when the drivers
 * are modified to handle the generated information, or the mapping of
 * generated data matches the driver definitions.
 */

/* SoC level DTS fixup file */

#define DT_CPU_CLOCK_FREQUENCY               DT_ARM_CORTEX_M7_0_CLOCK_FREQUENCY

#define DT_SPI_0_BASE_ADDRESS                DT_ATMEL_SAM_SPI_40008000_BASE_ADDRESS
#define DT_SPI_0_NAME                        DT_ATMEL_SAM_SPI_40008000_LABEL
#define DT_SPI_0_IRQ                         DT_ATMEL_SAM_SPI_40008000_IRQ_0
#define DT_SPI_0_IRQ_PRI                     DT_ATMEL_SAM_SPI_40008000_IRQ_0_PRIORITY
#define DT_SPI_0_PERIPHERAL_ID               DT_ATMEL_SAM_SPI_40008000_PERIPHERAL_ID

#define DT_SPI_1_BASE_ADDRESS                DT_ATMEL_SAM_SPI_40058000_BASE_ADDRESS
#define DT_SPI_1_NAME                        DT_ATMEL_SAM_SPI_40058000_LABEL
#define DT_SPI_1_IRQ                         DT_ATMEL_SAM_SPI_40058000_IRQ_0
#define DT_SPI_1_IRQ_PRI                     DT_ATMEL_SAM_SPI_40058000_IRQ_0_PRIORITY
#define DT_SPI_1_PERIPHERAL_ID               DT_ATMEL_SAM_SPI_40058000_PERIPHERAL_ID

#define DT_ADC_0_BASE_ADDRESS                DT_ATMEL_SAM_AFEC_4003C000_BASE_ADDRESS
#define DT_ADC_0_IRQ                         DT_ATMEL_SAM_AFEC_4003C000_IRQ_0
#define DT_ADC_0_IRQ_PRI                     DT_ATMEL_SAM_AFEC_4003C000_IRQ_0_PRIORITY
#define DT_ADC_0_NAME                        DT_ATMEL_SAM_AFEC_4003C000_LABEL
#define DT_ADC_0_PERIPHERAL_ID               DT_ATMEL_SAM_AFEC_4003C000_PERIPHERAL_ID

#define DT_ADC_1_BASE_ADDRESS                DT_ATMEL_SAM_AFEC_40064000_BASE_ADDRESS
#define DT_ADC_1_IRQ                         DT_ATMEL_SAM_AFEC_40064000_IRQ_0
#define DT_ADC_1_IRQ_PRI                     DT_ATMEL_SAM_AFEC_40064000_IRQ_0_PRIORITY
#define DT_ADC_1_NAME                        DT_ATMEL_SAM_AFEC_40064000_LABEL
#define DT_ADC_1_PERIPHERAL_ID               DT_ATMEL_SAM_AFEC_40064000_PERIPHERAL_ID

#define DT_USBHS_IRQ                         DT_ATMEL_SAM_USBHS_40038000_IRQ_0
#define DT_USBHS_IRQ_PRI                     DT_ATMEL_SAM_USBHS_40038000_IRQ_0_PRIORITY
#define DT_USBHS_MAXIMUM_SPEED               DT_ATMEL_SAM_USBHS_40038000_MAXIMUM_SPEED
#define DT_USBHS_NUM_BIDIR_EP                DT_ATMEL_SAM_USBHS_40038000_NUM_BIDIR_ENDPOINTS
#define DT_USBHS_PERIPHERAL_ID               DT_ATMEL_SAM_USBHS_40038000_PERIPHERAL_ID
#define DT_USBHS_RAM_BASE_ADDRESS            DT_ATMEL_SAM_USBHS_40038000_RAM_0

#define DT_FLASH_DEV_BASE_ADDRESS            DT_ATMEL_SAM_FLASH_CONTROLLER_400E0C00_BASE_ADDRESS
#define DT_FLASH_DEV_NAME                    DT_ATMEL_SAM_FLASH_CONTROLLER_400E0C00_LABEL

/* End of SoC Level DTS fixup file */
