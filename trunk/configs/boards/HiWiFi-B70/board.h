/* HiWiFi B70 */

#define BOARD_PID		"HiWiFi-B70"
#define BOARD_NAME		"HiWiFi-B70"
#define BOARD_DESC		"HiWiFi B70 Wireless Router"
#define BOARD_VENDOR_NAME	"HiWiFi"
#define BOARD_VENDOR_URL	"http://www.hiwifi.com/"
#define BOARD_MODEL_URL		"http://www.hiwifi.com/"
#define BOARD_BOOT_TIME		30
#define BOARD_FLASH_TIME	120
#define BOARD_GPIO_BTN_RESET	18
#undef  BOARD_GPIO_BTN_WPS
#undef  BOARD_GPIO_BTN_FN1
#undef  BOARD_GPIO_BTN_FN2
#define BOARD_GPIO_LED_INVERTED		/* LED pins value is inverted (1: LED show, 0: LED hide) */
#undef  BOARD_GPIO_LED_ALL
#undef  BOARD_GPIO_LED_WIFI
#undef  BOARD_GPIO_LED_SW2G		/* soft-blink LED */
#undef  BOARD_GPIO_LED_SW5G		/* soft-blink LED */
#define BOARD_GPIO_LED_POWER	6
#undef  BOARD_GPIO_LED_LAN		/* LED Fn */
#undef  BOARD_GPIO_LED_WAN
#undef  BOARD_GPIO_LED_USB		/* USB #1 LED */
#undef  BOARD_GPIO_LED_USB2		/* USB #2 LED */
#undef  BOARD_GPIO_LED_ROUTER
#define BOARD_GPIO_PWR_USB_ON	1	/* 1: 5V Power ON, 0: 5V Power OFF */
#define BOARD_GPIO_PWR_USB	12	/* USB2.0 5V Power */
#define BOARD_GPIO_PWR_USB2	11	/* USB3.0 5V Power */
#define BOARD_HAS_5G_11AC	1
#define BOARD_NUM_ANT_5G_TX	2
#define BOARD_NUM_ANT_5G_RX	2
#define BOARD_NUM_ANT_2G_TX	2
#define BOARD_NUM_ANT_2G_RX	2
#define BOARD_NUM_ETH_LEDS	0
#define BOARD_NUM_ETH_EPHY	4
#define BOARD_HAS_EPHY_L1000	1
#define BOARD_HAS_EPHY_W1000	1
#define BOARD_NUM_UPHY_USB3	1
#define BOARD_USB_PORT_SWAP	0	/* USB3.0 = #2, USB2.0 = #1 */
