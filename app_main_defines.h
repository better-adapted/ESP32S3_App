#include <Arduino.h>

#define GPIO_NEOPIXEL 38

//#define APP_SUPPORT_ESP32S3_COMMON
//#define APP_SUPPORT_FILE_SYSTEM

#define APP_SUPPORT_WIFI_PROV

//#define APP_SUPPORT_I2C
//#define APP_SUPPORT_I2C_EEPROM

#define APP_SUPPORT_RFM69

#ifdef APP_SUPPORT_RFM69
#define GPIO_RFM69_U6_CS		10
#define GPIO_RFM69_U6_IRQ		2
#define GPIO_RFM69_U6_RST		42
#define GPIO_RFM69_U7_CS		14
#define GPIO_RFM69_U7_IRQ		4
#define GPIO_RFM69_U7_RST		41
#endif // APP_SUPPORT_RFM69

#define GPIO_BOOT_SWITCH		0
#define GPIO_CONFIG_SWITCH		5

#define APP_SUPPORT_CLI


#ifdef APP_SUPPORT_WIFI_PROV
#define GPIO_WIFI_PROV_SWT		4
#define CONFIG_EXAMPLE_PROV_TRANSPORT_BLE
//#define CONFIG_EXAMPLE_PROV_TRANSPORT_SOFTAP
#define CONFIG_EXAMPLE_PROV_SECURITY_VERSION_1
//#define CONFIG_EXAMPLE_PROV_SECURITY_VERSION_2
//#define CONFIG_EXAMPLE_PROV_SEC2_DEV_MODE
//#define  CONFIG_EXAMPLE_PROV_SEC2_PROD_MODE
#define CONFIG_EXAMPLE_PROV_TRANSPORT 1
//#define CONFIG_EXAMPLE_PROV_ENABLE_APP_CALLBACK is not set
//#define  CONFIG_EXAMPLE_RESET_PROVISIONED is not set
#define CONFIG_EXAMPLE_RESET_PROV_MGR_ON_FAILURE
#define CONFIG_EXAMPLE_PROV_MGR_CONNECTION_CNT 5
#define CONFIG_EXAMPLE_PROV_MGR_MAX_RETRY_CNT 5
#define CONFIG_EXAMPLE_PROV_SHOW_QR
#define CONFIG_EXAMPLE_PROV_USING_BLUEDROID
//#define  CONFIG_EXAMPLE_REPROVISIONING is not set
//#define  end of Example Configuration
//#define EXAMPLE_PROV_SEC2_USERNAME "FSL"
//#define EXAMPLE_PROV_SEC2_PWD "pass"
#endif // APP_SUPPORT_WIFI_PROV



#ifndef APP_MAIN_DEFINES_H
#define APP_MAIN_DEFINES_H

typedef struct
{
	union
	{
		uint32_t all;
		struct
		{
			bool ShowMemUsage:1;
			bool PingDisable:1;			
			bool ShowWiFiStatus:1;
			bool ShowPCNTpoll:1;
			bool ShowLEDstatus:1;
			bool ShowLED_IO_writes:1;
			bool ShowWDTfeed:1;			
		}bits;
	};
}App_debug_flags_t;
#endif // APP_MAIN_DEFINES_H