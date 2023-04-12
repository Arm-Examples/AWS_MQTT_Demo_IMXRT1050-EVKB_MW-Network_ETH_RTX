
/*
 * Auto generated Run-Time-Environment Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'AWS_MQTT_Demo' 
 * Target:  'Target 1' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "fsl_device_registers.h"

/* ARM::CMSIS:RTOS2:Keil RTX5:Source:5.5.4 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_RTX5            /* CMSIS-RTOS2 Keil RTX5 */
        #define RTE_CMSIS_RTOS2_RTX5_SOURCE     /* CMSIS-RTOS2 Keil RTX5 Source */
/* ARM::Security:mbed TLS:2.24.0 */
#define RTE_Security_mbedTLS            /* Security mbed TLS */
/* Keil.ARM Compiler::Compiler:Event Recorder:DAP:1.5.1 */
#define RTE_Compiler_EventRecorder
          #define RTE_Compiler_EventRecorder_DAP
/* Keil.ARM Compiler::Compiler:I/O:STDERR:User:1.2.0 */
#define RTE_Compiler_IO_STDERR          /* Compiler I/O: STDERR */
          #define RTE_Compiler_IO_STDERR_User     /* Compiler I/O: STDERR User */
/* Keil.ARM Compiler::Compiler:I/O:STDIN:User:1.2.0 */
#define RTE_Compiler_IO_STDIN           /* Compiler I/O: STDIN */
          #define RTE_Compiler_IO_STDIN_User      /* Compiler I/O: STDIN User */
/* Keil.ARM Compiler::Compiler:I/O:STDOUT:User:1.2.0 */
#define RTE_Compiler_IO_STDOUT          /* Compiler I/O: STDOUT */
          #define RTE_Compiler_IO_STDOUT_User     /* Compiler I/O: STDOUT User */
/* Keil.MDK-Plus::Network:CORE:IPv4 Release:7.18.0 */
#define RTE_Network_Core                /* Network Core */
          #define RTE_Network_IPv4                /* Network IPv4 Stack */
          #define RTE_Network_Release             /* Network Release Version */
/* Keil.MDK-Plus::Network:Interface:ETH:7.18.0 */
#define RTE_Network_Interface_ETH_0     /* Network Interface ETH 0 */

/* Keil.MDK-Plus::Network:Service:DNS Client:7.18.0 */
#define RTE_Network_DNS_Client          /* Network DNS Client */
/* Keil.MDK-Plus::Network:Socket:BSD:7.18.0 */
#define RTE_Network_Socket_BSD          /* Network Socket BSD */
/* Keil.MDK-Plus::Network:Socket:TCP:7.18.0 */
#define RTE_Network_Socket_TCP          /* Network Socket TCP */
/* Keil.MDK-Plus::Network:Socket:UDP:7.18.0 */
#define RTE_Network_Socket_UDP          /* Network Socket UDP */
/* Keil::CMSIS Driver:Ethernet MAC:1.3.0 */
#define RTE_Drivers_ETH_MAC0    (1U)    /* Driver ETH_MAC0 */
/* Keil::CMSIS Driver:Ethernet PHY:KSZ8081RNA:6.3.0 */
#define RTE_Drivers_PHY_KSZ8081RNA      /* Driver PHY KSZ8081RNA/RND */
/* Keil::CMSIS Driver:MCI:1.4.0 */
#define RTE_Drivers_MCI0        (1U)    /* Driver MCI0 */
        #define RTE_Drivers_MCI1        (1U)    /* Driver MCI1 */
/* Keil::CMSIS Driver:VIO:Board:IMXRT1050-EVKB:1.1.0 */
#define RTE_VIO_BOARD
        #define RTE_VIO_IMXRT1050_EVKB
/* MDK-Packs::IoT Client:AWS:4.0.0 */
#define RTE_IoT_Client_AWS              /* AWS IoT Client */
/* MDK-Packs::IoT Utility:AWS:Common:1.1.0 */
#define RTE_IoT_AWS_Base                /* AWS Base */
/* MDK-Packs::IoT Utility:AWS:MQTT:2.1.0 */
#define RTE_IoT_AWS_MQTT                /* AWS MQTT */
/* MDK-Packs::IoT Utility:AWS:Platform:CMSIS-RTOS2 mbedTLS:1.0.0 */
#define RTE_IoT_AWS_Platform            /* AWS Platform */
        #define RTE_IoT_AWS_Platform_RTOS2      /* AWS Platform CMSIS-RTOS2 */
        #define RTE_IoT_AWS_Platform_mbedTLS    /* AWS Platform mbedTLS */
/* MDK-Packs::IoT Utility:Socket:MDK Network:1.2.1 */
#define RTE_IoT_Socket                  /* IoT Socket */
        #define RTE_IoT_Socket_MDK_Network      /* IoT Socket: MDK::Network */
/* NXP::Board Support:SDK Drivers:evkbimxrt1050:2.0.1 */
#ifndef XIP_EXTERNAL_FLASH
#define XIP_EXTERNAL_FLASH 1
#endif
#ifndef XIP_BOOT_HEADER_ENABLE
#define XIP_BOOT_HEADER_ENABLE 1
#endif
/* NXP::Device:SDK Drivers:xip_device:2.0.3 */
#ifndef XIP_EXTERNAL_FLASH
#define XIP_EXTERNAL_FLASH 1
#endif
#ifndef XIP_BOOT_HEADER_ENABLE
#define XIP_BOOT_HEADER_ENABLE 1
#endif
/* NXP::Device:SDK Utilities:serial_manager_uart:1.0.0 */
#ifndef SERIAL_PORT_TYPE_UART
#define SERIAL_PORT_TYPE_UART 1
#endif


#endif /* RTE_COMPONENTS_H */
