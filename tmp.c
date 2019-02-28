---- led Matches (559 in 86 files) ----
3945.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) line 45 : /* Send led command */
4965.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) line 240 : /* Send led command */
4965.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) line 260 : /* Set led register off */
ath5k_led in ath5k.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	struct led_classdev led_dev;		/* led classdev */
ath5k_hw in ath5k.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	struct ath5k_led	rx_led;		/* rx led */
ath5k_hw in ath5k.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	struct ath5k_led	tx_led;		/* tx led */
bcmdevs.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\bcmdhd\include) line 509 : /* board specific GPIO assignment, gpio 0-3 are also customer-configurable led */
bnx2x_set_led in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 		DP(NETIF_MSG_LINK, "bnx2x_set_led: Invalid led mode %d\n",
bnx2x_set_e1e2_module_fault_led in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 		DP(NETIF_MSG_LINK, "Set fault module-detected led "
bnx2x_set_e1e2_module_fault_led in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 		DP(NETIF_MSG_LINK, "Error: Invalid fault led mode 0x%x\n",
bnx2x_sfp_module_detection in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 		/* Turn on fault module-detected led */
bnx2x_sfp_module_detection in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 		/* Turn off fault module-detected led */
bnx2x_handle_module_detect_int in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 	/* Set valid module led off */
bnx2x_5461x_set_link_led in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 	DP(NETIF_MSG_LINK, "54618x set link led (mode=%x)\n", mode);
bnx2x_link_reset in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 	 /* clear link led */
bnx2x_phy in bnx2x_link.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 	/* Set link led mode (on/off/oper)*/
bnx2x_link.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 345 : /* Set/Unset the led
bnx2x_link.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 346 :    Basically, the CLC takes care of the led for the link, but in case one needs
bnx2x_link.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 347 :    to set/unset the led unnaturally, set the "mode" to LED_MODE_OPER to
bnx2x_link.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 348 :    blink the led, and LED_MODE_OFF to set the led off.*/
bnx2x_reg.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 1883 : /* [RW 1] led 10g for port 0 */
bnx2x_reg.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 1885 : /* [RW 1] led 10g for port 1 */
bnx2x_reg.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 1916 : /* [RW 4] led mode for port0: 0 MAC; 1-3 PHY1; 4 MAC2; 5-7 PHY4; 8-MAC3;
cassini.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sun) line 424 : #define   SATURN_PCFG_LAD             0x00000800 /* 0 = mac core led ctrl
cassini.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sun) line 427 : 						    1 = mac core led ctrl
common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) line 470 :  * Adjust led blink rate to compensate on a MAC Clock difference on every HW
common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) line 473 :  * Need to compensate on the led on/off time per HW according to the deviation
common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) line 474 :  * to achieve the desired led frequency
common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) line 492 : /* Set led pattern command */
il_led_cmd in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 		/* led is SOLID_ON */
il_led_brightness_set in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	struct il_priv *il = container_of(led_cdev, struct il_priv, led);
il_led_blink_set in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	struct il_priv *il = container_of(led_cdev, struct il_priv, led);
il_leds_init in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	il->led.name =
il_leds_init in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	    kasprintf(GFP_KERNEL, "%s-led", wiphy_name(il->hw->wiphy));
il_leds_init in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	il->led.brightness_set = il_led_brightness_set;
il_leds_init in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	il->led.blink_set = il_led_blink_set;
il_leds_init in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	il->led.max_brightness = 1;
il_leds_init in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 		il->led.default_trigger =
il_leds_init in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 		il->led.default_trigger = ieee80211_get_radio_led_name(il->hw);
il_leds_init in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	ret = led_classdev_register(&il->pci_dev->dev, &il->led);
il_leds_init in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 		kfree(il->led.name);
il_leds_exit in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	led_classdev_unregister(&il->led);
il_leds_exit in common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	kfree(il->led.name);
il_priv in common.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) : 	struct led_classdev led;
common.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlegacy) line 1618 :  *    IL_LED_BLINK:    adjust led blink rate based on blink table
debug.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) line 301 : 	{ ATH5K_DEBUG_LED,	"led",		"LED management" },
debug.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) line 82 :  * @ATH5K_DEBUG_LED: led management
led_indication in drvfbi.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\fddi\skfp) : 	/* Ring up = yellow led OFF*/
led_indication in drvfbi.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\fddi\skfp) : 		/* Link at Port A/S = green led A ON */
led_indication in drvfbi.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\fddi\skfp) : 		/* Link at Port B = green led B ON */
e1000_mac.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\igb) line 1298 :  *  Blink the led's which are set to be on.
ar9170_led_mode in eeprom.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\carl9170) : 	__le16 led;
etrax_ethernet_init in eth_v10.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\cris) : 	/* Initialize next time the led can flash */
p54_set_leds in fwio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	struct p54_led *led;
p54_set_leds in fwio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	skb = p54_alloc_skb(priv, P54_HDR_FLAG_CONTROL_OPSET, sizeof(*led),
p54_set_leds in fwio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	led = (struct p54_led *) skb_put(skb, sizeof(*led));
p54_set_leds in fwio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	led->flags = cpu_to_le16(0x0003);
p54_set_leds in fwio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	led->mask[0] = led->mask[1] = cpu_to_le16(priv->softled_state);
p54_set_leds in fwio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	led->delay[0] = cpu_to_le16(1);
p54_set_leds in fwio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	led->delay[1] = cpu_to_le16(0);
gpio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) line 39 :  * GPIO pins, we handle them through the LED subsystem on led.c
gpio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) line 44 :  * ath5k_hw_set_ledstate() - Set led state
ath5k_hw_set_ledstate in gpio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	u32 led;
ath5k_hw_set_ledstate in gpio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	/*5210 has different led mode handling*/
ath5k_hw_set_ledstate in gpio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	/*Reset led status*/
ath5k_hw_set_ledstate in gpio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 		led = AR5K_PCICFG_LEDMODE_PROP | AR5K_PCICFG_LED_PEND;
ath5k_hw_set_ledstate in gpio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 		led = AR5K_PCICFG_LEDMODE_PROP | AR5K_PCICFG_LED_NONE;
ath5k_hw_set_ledstate in gpio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 		led = AR5K_PCICFG_LEDMODE_PROP | AR5K_PCICFG_LED_ASSOC;
ath5k_hw_set_ledstate in gpio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 		led = AR5K_PCICFG_LEDMODE_PROM | AR5K_PCICFG_LED_NONE;
ath5k_hw_set_ledstate in gpio.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 		AR5K_REG_ENABLE_BITS(ah, AR5K_PCICFG, led);
hostap_hw.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\hostap) line 3413 : /* External hostap_callback.c file can be used to, e.g., blink activity led.
hw.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192ce) line 42 : #include "led.h"
hw.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192cu) line 44 : #include "led.h"
hw.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192de) line 42 : #include "led.h"
hw.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192se) line 42 : #include "led.h"
e1000_led_on_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 	u32 i, led;
e1000_led_on_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			led = (data >> (i * 5)) & E1000_PHY_LED0_MASK;
e1000_led_on_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			if ((led & E1000_PHY_LED0_MODE_MASK) !=
e1000_led_on_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			if (led & E1000_PHY_LED0_IVRT)
e1000_led_off_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 	u32 i, led;
e1000_led_off_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			led = (data >> (i * 5)) & E1000_PHY_LED0_MASK;
e1000_led_off_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			if ((led & E1000_PHY_LED0_MODE_MASK) !=
e1000_led_off_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			if (led & E1000_PHY_LED0_IVRT)
ipw_led_link_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	u32 led;
ipw_led_link_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	 * then we don't toggle a LINK led */
ipw_led_link_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led = ipw_read_reg32(priv, IPW_EVENT_REG);
ipw_led_link_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led |= priv->led_association_on;
ipw_led_link_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led = ipw_register_toggle(led);
ipw_led_link_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		IPW_DEBUG_LED("Reg: 0x%08X\n", led);
ipw_led_link_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		ipw_write_reg32(priv, IPW_EVENT_REG, led);
ipw_led_link_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	u32 led;
ipw_led_link_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	 * then we don't goggle the LINK led. */
ipw_led_link_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led = ipw_read_reg32(priv, IPW_EVENT_REG);
ipw_led_link_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led &= priv->led_association_off;
ipw_led_link_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led = ipw_register_toggle(led);
ipw_led_link_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		IPW_DEBUG_LED("Reg: 0x%08X\n", led);
ipw_led_link_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		ipw_write_reg32(priv, IPW_EVENT_REG, led);
__ipw_led_activity_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	u32 led;
__ipw_led_activity_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led = ipw_read_reg32(priv, IPW_EVENT_REG);
__ipw_led_activity_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led |= priv->led_activity_on;
__ipw_led_activity_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led = ipw_register_toggle(led);
__ipw_led_activity_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		IPW_DEBUG_LED("Reg: 0x%08X\n", led);
__ipw_led_activity_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		ipw_write_reg32(priv, IPW_EVENT_REG, led);
ipw_led_activity_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	u32 led;
ipw_led_activity_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led = ipw_read_reg32(priv, IPW_EVENT_REG);
ipw_led_activity_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led &= priv->led_activity_off;
ipw_led_activity_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led = ipw_register_toggle(led);
ipw_led_activity_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		IPW_DEBUG_LED("Reg: 0x%08X\n", led);
ipw_led_activity_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		ipw_write_reg32(priv, IPW_EVENT_REG, led);
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	u32 led;
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	led = ipw_read_reg32(priv, IPW_EVENT_REG);
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led |= priv->led_ofdm_on;
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led &= priv->led_association_off;
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led |= priv->led_ofdm_on;
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led |= priv->led_association_on;
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led &= priv->led_ofdm_off;
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 		led |= priv->led_association_on;
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	led = ipw_register_toggle(led);
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	IPW_DEBUG_LED("Reg: 0x%08X\n", led);
ipw_led_band_on in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	ipw_write_reg32(priv, IPW_EVENT_REG, led);
ipw_led_band_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	u32 led;
ipw_led_band_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	led = ipw_read_reg32(priv, IPW_EVENT_REG);
ipw_led_band_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	led &= priv->led_ofdm_off;
ipw_led_band_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	led &= priv->led_association_off;
ipw_led_band_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	led = ipw_register_toggle(led);
ipw_led_band_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	IPW_DEBUG_LED("Reg: 0x%08X\n", led);
ipw_led_band_off in ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) : 	ipw_write_reg32(priv, IPW_EVENT_REG, led);
ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) line 1558 : static DEVICE_ATTR(led, S_IWUSR | S_IRUGO, show_led, store_led);
ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) line 12117 : module_param_named(led, led_support, int, 0444);
ipw2200.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ipw2x00) line 12118 : MODULE_PARM_DESC(led, "enable led control on some systems (default 1 on)");
iwl-core.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 1135 :  * for the reason of iwl_led.c need to control the led blinking based on
iwl-dev.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 45 : #include "iwl-led.h"
iwl_priv in iwl-dev.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 	struct led_classdev led;
iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 71 : /* Set led register off */
iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 78 :  * Adjust led blink rate to compensate on a MAC Clock difference on every HW
iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 81 :  * Need to compensate on the led on/off time per HW according to the deviation
iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 82 :  * to achieve the desired led frequency
iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 118 : /* Set led pattern command */
iwl_led_cmd in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 		/* led is SOLID_ON */
iwl_led_brightness_set in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 	struct iwl_priv *priv = container_of(led_cdev, struct iwl_priv, led);
iwl_led_blink_set in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 	struct iwl_priv *priv = container_of(led_cdev, struct iwl_priv, led);
iwl_leds_init in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 	priv->led.name = kasprintf(GFP_KERNEL, "%s-led",
iwl_leds_init in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 	priv->led.brightness_set = iwl_led_brightness_set;
iwl_leds_init in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 	priv->led.blink_set = iwl_led_blink_set;
iwl_leds_init in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 	priv->led.max_brightness = 1;
iwl_leds_init in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 		priv->led.default_trigger =
iwl_leds_init in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 		priv->led.default_trigger =
iwl_leds_init in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 	ret = led_classdev_register(trans(priv)->dev, &priv->led);
iwl_leds_init in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 		kfree(priv->led.name);
iwl_leds_exit in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 	led_classdev_unregister(&priv->led);
iwl_leds_exit in iwl-led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) : 	kfree(priv->led.name);
iwl-shared.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 201 :  *    IWL_LED_BLINK:    adjust led blink rate based on blink table
iwl-shared.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 202 :  *    IWL_LED_DISABLE:	led disabled
iwl-shared.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 214 :  * @led_compensation: compensate on the led on/off time per HW according
iwl-shared.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 215 :  *	to the deviation to achieve the desired led frequency.
iwl-shared.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 216 :  *	The detail algorithm is described in iwl-led.c
ixgbe_common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 544 :  *  @index: led number to turn on
ixgbe_common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 562 :  *  @index: led number to turn off
ixgbe_common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 2656 :  *  @index: led number to blink
ixgbe_common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 2690 :  *  @index: led number to stop blinking
ixgbe_x540.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 745 :  * @index: led number to blink
ixgbe_x540.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 781 :  * @index: led number to stop blinking
ath5k_led_brightness_set in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	struct ath5k_led *led = container_of(led_dev, struct ath5k_led,
ath5k_led_brightness_set in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 		ath5k_led_off(led->ah);
ath5k_led_brightness_set in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 		ath5k_led_on(led->ah);
led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) line 124 : ath5k_register_led(struct ath5k_hw *ah, struct ath5k_led *led,
ath5k_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	led->ah = ah;
ath5k_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	strncpy(led->name, name, sizeof(led->name));
ath5k_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	led->led_dev.name = led->name;
ath5k_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	led->led_dev.default_trigger = trigger;
ath5k_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	led->led_dev.brightness_set = ath5k_led_brightness_set;
ath5k_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	err = led_classdev_register(ah->dev, &led->led_dev);
ath5k_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 		led->ah = NULL;
led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) line 144 : ath5k_unregister_led(struct ath5k_led *led)
ath5k_unregister_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	if (!led->ah)
ath5k_unregister_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	led_classdev_unregister(&led->led_dev);
ath5k_unregister_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	ath5k_led_off(led->ah);
ath5k_unregister_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) : 	led->ah = NULL;
led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\carl9170) line 106 : static void carl9170_led_set_brightness(struct led_classdev *led,
carl9170_led_set_brightness in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\carl9170) : 	struct carl9170_led *arl = container_of(led, struct carl9170_led, l);
p54_led_brightness_set in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	struct p54_led_dev *led = container_of(led_dev, struct p54_led_dev,
p54_led_brightness_set in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	struct ieee80211_hw *dev = led->hw_dev;
p54_led_brightness_set in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	if ((brightness) && (led->registered)) {
p54_led_brightness_set in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 		led->toggled++;
p54_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	struct p54_led_dev *led = &priv->leds[led_index];
p54_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	if (led->registered)
p54_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	snprintf(led->name, sizeof(led->name), "p54-%s::%s",
p54_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	led->hw_dev = priv->hw;
p54_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	led->index = led_index;
p54_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	led->led_dev.name = led->name;
p54_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	led->led_dev.default_trigger = trigger;
p54_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	led->led_dev.brightness_set = p54_led_brightness_set;
p54_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 	err = led_classdev_register(wiphy_dev(priv->hw->wiphy), &led->led_dev);
p54_register_led in led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) : 		led->registered = 1;
led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192ce) line 33 : #include "led.h"
led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192cu) line 31 : #include "led.h"
led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192de) line 33 : #include "led.h"
led.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192se) line 33 : #include "led.h"
b43_led_update in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 			   struct b43_led *led)
b43_led_update in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	if (!led->wl)
b43_led_update in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	/* The led->state read is racy, but we don't care. In case we raced
b43_led_update in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		turn_on = atomic_read(&led->state) != LED_OFF;
b43_led_update in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	if (turn_on == led->hw_state)
b43_led_update in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led->hw_state = turn_on;
b43_led_update in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		b43_led_turn_on(dev, led->index, led->activelow);
b43_led_update in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		b43_led_turn_off(dev, led->index, led->activelow);
b43_led_brightness_set in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	struct b43_led *led = container_of(led_dev, struct b43_led, led_dev);
b43_led_brightness_set in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	struct b43_wl *wl = led->wl;
b43_led_brightness_set in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		atomic_set(&led->state, brightness);
leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) line 121 : static int b43_register_led(struct b43_wldev *dev, struct b43_led *led,
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	if (led->wl)
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led->wl = dev->wl;
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led->index = led_index;
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led->activelow = activelow;
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	strncpy(led->name, name, sizeof(led->name));
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	atomic_set(&led->state, 0);
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led->led_dev.name = led->name;
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led->led_dev.default_trigger = default_trigger;
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led->led_dev.brightness_set = b43_led_brightness_set;
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	err = led_classdev_register(dev->dev->dev, &led->led_dev);
b43_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		led->wl = NULL;
leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) line 151 : static void b43_unregister_led(struct b43_led *led)
b43_unregister_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	if (!led->wl)
b43_unregister_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led_classdev_unregister(&led->led_dev);
b43_unregister_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led->wl = NULL;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	struct b43_led *led;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led = &dev->wl->leds.led_radio;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	if (led->wl) {
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 			b43_led_turn_on(dev, led->index, led->activelow);
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 			led->hw_state = true;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 			atomic_set(&led->state, 1);
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 			b43_led_turn_off(dev, led->index, led->activelow);
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 			led->hw_state = false;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 			atomic_set(&led->state, 0);
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led = &dev->wl->leds.led_tx;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	if (led->wl) {
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		b43_led_turn_off(dev, led->index, led->activelow);
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		led->hw_state = false;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		atomic_set(&led->state, 0);
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led = &dev->wl->leds.led_rx;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	if (led->wl) {
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		b43_led_turn_off(dev, led->index, led->activelow);
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		led->hw_state = false;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		atomic_set(&led->state, 0);
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	led = &dev->wl->leds.led_assoc;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 	if (led->wl) {
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		b43_led_turn_off(dev, led->index, led->activelow);
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		led->hw_state = false;
b43_leds_init in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43) : 		atomic_set(&led->state, 0);
b43legacy_led_brightness_set in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	struct b43legacy_led *led = container_of(led_dev, struct b43legacy_led,
b43legacy_led_brightness_set in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	struct b43legacy_wldev *dev = led->dev;
b43legacy_led_brightness_set in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 		b43legacy_led_turn_off(dev, led->index, led->activelow);
b43legacy_led_brightness_set in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 		b43legacy_led_turn_on(dev, led->index, led->activelow);
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 				  struct b43legacy_led *led,
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	if (led->dev)
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	led->dev = dev;
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	led->index = led_index;
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	led->activelow = activelow;
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	strncpy(led->name, name, sizeof(led->name));
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	led->led_dev.name = led->name;
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	led->led_dev.default_trigger = default_trigger;
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	led->led_dev.brightness_set = b43legacy_led_brightness_set;
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	err = led_classdev_register(dev->dev->dev, &led->led_dev);
b43legacy_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 		led->dev = NULL;
leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) line 119 : static void b43legacy_unregister_led(struct b43legacy_led *led)
b43legacy_unregister_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	if (!led->dev)
b43legacy_unregister_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	led_classdev_unregister(&led->led_dev);
b43legacy_unregister_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	b43legacy_led_turn_off(led->dev, led->index, led->activelow);
b43legacy_unregister_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\b43legacy) : 	led->dev = NULL;
led_turn_on in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	struct rtl8187_led *led = &priv->led_tx;
led_turn_on in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	if (!led->dev)
led_turn_on in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	switch (led->ledpin) {
led_turn_off in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	struct rtl8187_led *led = &priv->led_tx;
led_turn_off in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	if (!led->dev)
led_turn_off in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	switch (led->ledpin) {
rtl8187_led_brightness_set in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	struct rtl8187_led *led = container_of(led_dev, struct rtl8187_led,
rtl8187_led_brightness_set in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	struct ieee80211_hw *hw = led->dev;
rtl8187_led_brightness_set in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	if (led->is_radio) {
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 				struct rtl8187_led *led, const char *name,
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	if (led->dev)
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	led->dev = dev;
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	led->ledpin = ledpin;
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	led->is_radio = is_radio;
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	strncpy(led->name, name, sizeof(led->name));
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	led->led_dev.name = led->name;
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	led->led_dev.default_trigger = default_trigger;
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	led->led_dev.brightness_set = rtl8187_led_brightness_set;
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	err = led_classdev_register(&priv->udev->dev, &led->led_dev);
rtl8187_register_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 		led->dev = NULL;
leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) line 164 : static void rtl8187_unregister_led(struct rtl8187_led *led)
rtl8187_unregister_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	struct ieee80211_hw *hw = led->dev;
rtl8187_unregister_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	led_classdev_unregister(&led->led_dev);
rtl8187_unregister_led in leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	led->dev = NULL;
rtl8187_led in leds.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtl818x\rtl8187) : 	/* The pin/method used to control the led */
lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) line 30 :   * lmc_dec_reset() functions, as well as the led controls and the
lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) line 1937 : void lmc_led_on(lmc_softc_t * const sc, u32 led) /*fold00*/
lmc_led_on in lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) :     if((~sc->lmc_miireg16) & led){ /* Already on! */
lmc_led_on in lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) :     sc->lmc_miireg16 &= ~led;
lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) line 1950 : void lmc_led_off(lmc_softc_t * const sc, u32 led) /*fold00*/
lmc_led_off in lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) :     if(sc->lmc_miireg16 & led){ /* Already set don't do anything */
lmc_led_off in lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) :     sc->lmc_miireg16 |= led;
lmc_t1_get_link_status in lmc_media.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) :      * Use the green bit to identify which one lit the led
Makefile (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) line 13 : ath5k-y				+= led.o
Makefile (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\carl9170) line 1 : carl9170-objs := main.o usb.o cmd.o mac.o phy.o led.o fw.o tx.o rx.o
Makefile (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\iwlwifi) line 9 : iwlwifi-objs		+= iwl-scan.o iwl-led.o
Makefile (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\p54) line 2 : p54common-$(CONFIG_P54_LEDS)	+= led.o
Makefile (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192ce) line 4 : 		led.o		\
Makefile (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192cu) line 4 : 		led.o		\
Makefile (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192de) line 5 : 		led.o		\
Makefile (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192se) line 5 : 		led.o		\
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 	u32 led = 0;
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 	cphy_mdio_read(cphy, MDIO_MMD_PMAPMD, MDIO_CTRL2, &led);
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 		led |= LINK_ENABLE_BIT;
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 		cphy_mdio_write(cphy, MDIO_MMD_PMAPMD, MDIO_CTRL2, led);
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 		led &= ~LINK_ENABLE_BIT;
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 		cphy_mdio_write(cphy, MDIO_MMD_PMAPMD, MDIO_CTRL2, led);
xcvr_init_10g_mrvl88x2011 in niu.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sun) : 	/* led activity */
pcnet32_set_phys_id in pcnet32.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\amd) : 		/* Blink the led */
peak_pciec_card in peak_pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 	struct delayed_work led_work;	/* led delayed work */
peak_pciec_write_pca9553 in peak_pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 	/* cache led mask */
peak_pciec_led_work in peak_pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 		/* if bytes counters changed, set fast blinking led */
peak_pciec_write_reg in peak_pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 			/* Reset Mode: set led on */
peak_pciec_write_reg in peak_pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 			/* Normal Mode: led slow blinking and start led timer */
peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) line 72 : /* led selection bits */
peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) line 76 : /* led state value */
pcan_write_canreg in peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 			/* Reset Mode: set led on */
pcan_write_canreg in peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 			/* Normal Mode: led slow blinking and start led timer */
pcan_set_leds in peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 			/* clear corresponding led bits in ccr */
pcan_led_timer in peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 		/* if bytes counters changed, set fast blinking led */
pcan_add_channels in peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 		/* set corresponding led on in the new ccr */
phy.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sfc) line 37 : extern void falcon_qt202x_set_led(struct efx_nic *p, int led, int state);
qt202x_phy.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sfc) line 53 : void falcon_qt202x_set_led(struct efx_nic *p, int led, int mode)
falcon_qt202x_set_led in qt202x_phy.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sfc) : 	int addr = MDIO_QUAKE_LED0_REG + led;
reg.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\ath\ath5k) line 922 : #define AR5K_PCICFG_LEDSLOW		0x00800000	/* Slowest led blink rate [5211+] */
rt2400pci_brightness_set in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt2400pci_brightness_set in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00pci_register_read(led->rt2x00dev, LEDCSR, &reg);
rt2400pci_brightness_set in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	if (led->type == LED_TYPE_RADIO || led->type == LED_TYPE_ASSOC)
rt2400pci_brightness_set in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	else if (led->type == LED_TYPE_ACTIVITY)
rt2400pci_brightness_set in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00pci_register_write(led->rt2x00dev, LEDCSR, reg);
rt2400pci_blink_set in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt2400pci_blink_set in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00pci_register_read(led->rt2x00dev, LEDCSR, &reg);
rt2400pci_blink_set in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00pci_register_write(led->rt2x00dev, LEDCSR, reg);
rt2400pci_init_led in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 			       struct rt2x00_led *led,
rt2400pci_init_led in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->rt2x00dev = rt2x00dev;
rt2400pci_init_led in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->type = type;
rt2400pci_init_led in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness_set = rt2400pci_brightness_set;
rt2400pci_init_led in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.blink_set = rt2400pci_blink_set;
rt2400pci_init_led in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->flags = LED_INITIALIZED;
rt2400pci_init_eeprom in rt2400pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	 * Store led mode, for correct led behaviour.
rt2500pci_brightness_set in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt2500pci_brightness_set in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00pci_register_read(led->rt2x00dev, LEDCSR, &reg);
rt2500pci_brightness_set in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	if (led->type == LED_TYPE_RADIO || led->type == LED_TYPE_ASSOC)
rt2500pci_brightness_set in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	else if (led->type == LED_TYPE_ACTIVITY)
rt2500pci_brightness_set in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00pci_register_write(led->rt2x00dev, LEDCSR, reg);
rt2500pci_blink_set in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt2500pci_blink_set in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00pci_register_read(led->rt2x00dev, LEDCSR, &reg);
rt2500pci_blink_set in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00pci_register_write(led->rt2x00dev, LEDCSR, reg);
rt2500pci_init_led in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 			       struct rt2x00_led *led,
rt2500pci_init_led in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->rt2x00dev = rt2x00dev;
rt2500pci_init_led in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->type = type;
rt2500pci_init_led in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness_set = rt2500pci_brightness_set;
rt2500pci_init_led in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.blink_set = rt2500pci_blink_set;
rt2500pci_init_led in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->flags = LED_INITIALIZED;
rt2500pci_init_eeprom in rt2500pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	 * Store led mode, for correct led behaviour.
rt2500usb_brightness_set in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt2500usb_brightness_set in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2500usb_register_read(led->rt2x00dev, MAC_CSR20, &reg);
rt2500usb_brightness_set in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	if (led->type == LED_TYPE_RADIO || led->type == LED_TYPE_ASSOC)
rt2500usb_brightness_set in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	else if (led->type == LED_TYPE_ACTIVITY)
rt2500usb_brightness_set in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2500usb_register_write(led->rt2x00dev, MAC_CSR20, reg);
rt2500usb_blink_set in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt2500usb_blink_set in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2500usb_register_read(led->rt2x00dev, MAC_CSR21, &reg);
rt2500usb_blink_set in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2500usb_register_write(led->rt2x00dev, MAC_CSR21, reg);
rt2500usb_init_led in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 			       struct rt2x00_led *led,
rt2500usb_init_led in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->rt2x00dev = rt2x00dev;
rt2500usb_init_led in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->type = type;
rt2500usb_init_led in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness_set = rt2500usb_brightness_set;
rt2500usb_init_led in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.blink_set = rt2500usb_blink_set;
rt2500usb_init_led in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->flags = LED_INITIALIZED;
rt2500usb_init_eeprom in rt2500usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	 * Store led mode, for correct led behaviour.
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	    (enabled && led->rt2x00dev->curr_band == IEEE80211_BAND_2GHZ);
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00_get_field16(led->rt2x00dev->led_mcu_reg,
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00_get_field16(led->rt2x00dev->led_mcu_reg,
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	if (rt2x00_is_soc(led->rt2x00dev)) {
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2800_register_read(led->rt2x00dev, LED_CFG, &reg);
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		if (led->type == LED_TYPE_RADIO) {
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		} else if (led->type == LED_TYPE_ASSOC) {
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		} else if (led->type == LED_TYPE_QUALITY) {
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2800_register_write(led->rt2x00dev, LED_CFG, reg);
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		if (led->type == LED_TYPE_RADIO) {
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 			rt2800_mcu_request(led->rt2x00dev, MCU_LED, 0xff, ledmode,
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		} else if (led->type == LED_TYPE_ASSOC) {
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 			rt2800_mcu_request(led->rt2x00dev, MCU_LED, 0xff, ledmode,
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		} else if (led->type == LED_TYPE_QUALITY) {
rt2800_brightness_set in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 			rt2800_mcu_request(led->rt2x00dev, MCU_LED_STRENGTH, 0xff,
rt2800_init_led in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		     struct rt2x00_led *led, enum led_type type)
rt2800_init_led in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->rt2x00dev = rt2x00dev;
rt2800_init_led in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->type = type;
rt2800_init_led in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness_set = rt2800_brightness_set;
rt2800_init_led in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->flags = LED_INITIALIZED;
rt2800_init_eeprom in rt2800lib.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	 * Store led settings, for correct led behaviour.
rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) line 23 : 	Abstract: rt2x00 led specific routines.
rt2x00leds_led_quality in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led = &rt2x00dev->led_qual;
rt2x00leds_led_quality in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	if ((led->type != LED_TYPE_QUALITY) || !(led->flags & LED_REGISTERED))
rt2x00leds_led_quality in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	if (brightness != led->led_dev.brightness) {
rt2x00leds_led_quality in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		led->led_dev.brightness_set(&led->led_dev, brightness);
rt2x00leds_led_quality in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		led->led_dev.brightness = brightness;
rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) line 75 : static void rt2x00led_led_simple(struct rt2x00_led *led, bool enabled)
rt2x00led_led_simple in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	if (!(led->flags & LED_REGISTERED))
rt2x00led_led_simple in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness_set(&led->led_dev, brightness);
rt2x00led_led_simple in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness = brightness;
rt2x00leds_register_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 				   struct rt2x00_led *led,
rt2x00leds_register_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.name = name;
rt2x00leds_register_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness = LED_OFF;
rt2x00leds_register_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	retval = led_classdev_register(device, &led->led_dev);
rt2x00leds_register_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		ERROR(rt2x00dev, "Failed to register led handler.\n");
rt2x00leds_register_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->flags |= LED_REGISTERED;
rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) line 184 : static void rt2x00leds_unregister_led(struct rt2x00_led *led)
rt2x00leds_unregister_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led_classdev_unregister(&led->led_dev);
rt2x00leds_unregister_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	 * suspended the led is already off, and since we haven't
rt2x00leds_unregister_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	if (!(led->led_dev.flags & LED_SUSPENDED))
rt2x00leds_unregister_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		led->led_dev.brightness_set(&led->led_dev, LED_OFF);
rt2x00leds_unregister_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->flags &= ~LED_REGISTERED;
rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) line 210 : static inline void rt2x00leds_suspend_led(struct rt2x00_led *led)
rt2x00leds_suspend_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led_classdev_suspend(&led->led_dev);
rt2x00leds_suspend_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness_set(&led->led_dev, LED_OFF);
rt2x00leds_suspend_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness = LED_OFF;
rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) line 229 : static inline void rt2x00leds_resume_led(struct rt2x00_led *led)
rt2x00leds_resume_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led_classdev_resume(&led->led_dev);
rt2x00leds_resume_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness_set(&led->led_dev, LED_OFF);
rt2x00leds_resume_led in rt2x00leds.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness = LED_OFF;
rt2x00leds.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) line 23 : 	Abstract: rt2x00 led datastructures and routines
rt2x00link_tuner in rt2x00link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	 * Send a signal to the led to update the led signal strength.
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	    (enabled && led->rt2x00dev->curr_band == IEEE80211_BAND_5GHZ);
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	    (enabled && led->rt2x00dev->curr_band == IEEE80211_BAND_2GHZ);
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	if (led->type == LED_TYPE_RADIO) {
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00_set_field16(&led->rt2x00dev->led_mcu_reg,
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt


61pci_mcu_request(led->rt2x00dev, MCU_LED, 0xff,
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 				    (led->rt2x00dev->led_mcu_reg & 0xff),
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 				    ((led->rt2x00dev->led_mcu_reg >> 8)));
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	} else if (led->type == LED_TYPE_ASSOC) {
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00_set_field16(&led->rt2x00dev->led_mcu_reg,
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00_set_field16(&led->rt2x00dev->led_mcu_reg,
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt61pci_mcu_request(led->rt2x00dev, MCU_LED, 0xff,
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 				    (led->rt2x00dev->led_mcu_reg & 0xff),
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 				    ((led->rt2x00dev->led_mcu_reg >> 8)));
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	} else if (led->type == LED_TYPE_QUALITY) {
rt61pci_brightness_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt61pci_mcu_request(led->rt2x00dev, MCU_LED_STRENGTH, 0xff,
rt61pci_blink_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt61pci_blink_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00pci_register_read(led->rt2x00dev, MAC_CSR14, &reg);
rt61pci_blink_set in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00pci_register_write(led->rt2x00dev, MAC_CSR14, reg);
rt61pci_init_led in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 			     struct rt2x00_led *led,
rt61pci_init_led in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->rt2x00dev = rt2x00dev;
rt61pci_init_led in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->type = type;
rt61pci_init_led in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness_set = rt61pci_brightness_set;
rt61pci_init_led in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.blink_set = rt61pci_blink_set;
rt61pci_init_led in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->flags = LED_INITIALIZED;
rt61pci_init_eeprom in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	 * Store led settings, for correct led behaviour.
rt61pci_init_eeprom in rt61pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	 * switch to default led mode.
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	    (enabled && led->rt2x00dev->curr_band == IEEE80211_BAND_5GHZ);
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	    (enabled && led->rt2x00dev->curr_band == IEEE80211_BAND_2GHZ);
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	if (led->type == LED_TYPE_RADIO) {
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00_set_field16(&led->rt2x00dev->led_mcu_reg,
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00usb_vendor_request_sw(led->rt2x00dev, USB_LED_CONTROL,
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 					    0, led->rt2x00dev->led_mcu_reg,
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	} else if (led->type == LED_TYPE_ASSOC) {
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00_set_field16(&led->rt2x00dev->led_mcu_reg,
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00_set_field16(&led->rt2x00dev->led_mcu_reg,
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00usb_vendor_request_sw(led->rt2x00dev, USB_LED_CONTROL,
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 					    0, led->rt2x00dev->led_mcu_reg,
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	} else if (led->type == LED_TYPE_QUALITY) {
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 		rt2x00usb_vendor_request_sw(led->rt2x00dev, USB_LED_CONTROL,
rt73usb_brightness_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 					    led->rt2x00dev->led_mcu_reg,
rt73usb_blink_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	struct rt2x00_led *led =
rt73usb_blink_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00usb_register_read(led->rt2x00dev, MAC_CSR14, &reg);
rt73usb_blink_set in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	rt2x00usb_register_write(led->rt2x00dev, MAC_CSR14, reg);
rt73usb_init_led in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 			     struct rt2x00_led *led,
rt73usb_init_led in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->rt2x00dev = rt2x00dev;
rt73usb_init_led in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->type = type;
rt73usb_init_led in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.brightness_set = rt73usb_brightness_set;
rt73usb_init_led in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->led_dev.blink_set = rt73usb_blink_set;
rt73usb_init_led in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	led->flags = LED_INITIALIZED;
rt73usb_init_eeprom in rt73usb.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rt2x00) : 	 * Store led settings, for correct led behaviour.
s2io.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\neterion) line 5432 :  *  s2io_set_led - control NIC led
s2io.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\neterion) line 5464 :  * @state: led setting
siutils.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\bcmdhd) line 1486 : /* assign the gpio to an led */
si_gpioled in siutils.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\bcmdhd) : 	/* gpio led powersave reg */
bcom_phy_init in skge.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\marvell) : 	ext = PHY_B_PEC_EN_LTR; /* enable tx led */
sw.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192ce) line 41 : #include "led.h"
sw.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192cu) line 42 : #include "led.h"
sw.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192de) line 40 : #include "led.h"
sw.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192se) line 43 : #include "led.h"
trx.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192ce) line 37 : #include "led.h"
trx.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192de) line 37 : #include "led.h"
trx.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi\rtl8192se) line 38 : #include "led.h"
types.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\brcm80211\brcmsmac) line 87 :  * led
led_pin in types.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\libertas) : 	u8 led;
led_bhv in types.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\libertas) : 	uint8_t	led;
wifi.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\rtlwifi) line 695 : /*ledpin Identify how to implement this SW led.*/
wl_led_info in wlioctl.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\bcmdhd\include) : 	uint32      index;      /* led index */
wlioctl.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\bcmdhd\include) line 2915 : /* max # of leds supported by GPIO (gpio pin# == led index#) */
wlioctl.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\bcmdhd\include) line 2918 : /* led per-pin behaviors */
wlioctl.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\bcmdhd\include) line 2946 : /* led behavior numeric value format */
xirc2ps_cs.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\xircom) line 165 : /* values for the leds:    Bits 2-0 for led 1
xirc2ps_cs.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\xircom) line 166 :  *  0 disabled		   Bits 5-3 for led 2
read_pod in zd_chip.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\zd1211rw) : 		"patch 6M %d new PHY %d link LED%d tx led %d\n",
zd_chip.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wireless\zd1211rw) line 756 : /* 0x2 - link led on? */




删除无线后
=======================================
bnx2x_set_led in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 		DP(NETIF_MSG_LINK, "bnx2x_set_led: Invalid led mode %d\n",
bnx2x_set_e1e2_module_fault_led in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 		DP(NETIF_MSG_LINK, "Set fault module-detected led "
bnx2x_set_e1e2_module_fault_led in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 		DP(NETIF_MSG_LINK, "Error: Invalid fault led mode 0x%x\n",
bnx2x_sfp_module_detection in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 		/* Turn on fault module-detected led */
bnx2x_sfp_module_detection in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 		/* Turn off fault module-detected led */
bnx2x_handle_module_detect_int in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 	/* Set valid module led off */
bnx2x_5461x_set_link_led in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 	DP(NETIF_MSG_LINK, "54618x set link led (mode=%x)\n", mode);
bnx2x_link_reset in bnx2x_link.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 	 /* clear link led */
bnx2x_phy in bnx2x_link.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) : 	/* Set link led mode (on/off/oper)*/
bnx2x_link.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 345 : /* Set/Unset the led
bnx2x_link.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 346 :    Basically, the CLC takes care of the led for the link, but in case one needs
bnx2x_link.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 347 :    to set/unset the led unnaturally, set the "mode" to LED_MODE_OPER to
bnx2x_link.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 348 :    blink the led, and LED_MODE_OFF to set the led off.*/
bnx2x_reg.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 1883 : /* [RW 1] led 10g for port 0 */
bnx2x_reg.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 1885 : /* [RW 1] led 10g for port 1 */
bnx2x_reg.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\broadcom\bnx2x) line 1916 : /* [RW 4] led mode for port0: 0 MAC; 1-3 PHY1; 4 MAC2; 5-7 PHY4; 8-MAC3;
cassini.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sun) line 424 : #define   SATURN_PCFG_LAD             0x00000800 /* 0 = mac core led ctrl
cassini.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sun) line 427 : 						    1 = mac core led ctrl
led_indication in drvfbi.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\fddi\skfp) : 	/* Ring up = yellow led OFF*/
led_indication in drvfbi.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\fddi\skfp) : 		/* Link at Port A/S = green led A ON */
led_indication in drvfbi.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\fddi\skfp) : 		/* Link at Port B = green led B ON */
e1000_mac.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\igb) line 1298 :  *  Blink the led's which are set to be on.
e1000_led_on_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 	u32 i, led;
e1000_led_on_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			led = (data >> (i * 5)) & E1000_PHY_LED0_MASK;
e1000_led_on_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			if ((led & E1000_PHY_LED0_MODE_MASK) !=
e1000_led_on_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			if (led & E1000_PHY_LED0_IVRT)
e1000_led_off_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 	u32 i, led;
e1000_led_off_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			led = (data >> (i * 5)) & E1000_PHY_LED0_MASK;
e1000_led_off_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			if ((led & E1000_PHY_LED0_MODE_MASK) !=
e1000_led_off_pchlan in ich8lan.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\e1000e) : 			if (led & E1000_PHY_LED0_IVRT)
ixgbe_common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 544 :  *  @index: led number to turn on
ixgbe_common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 562 :  *  @index: led number to turn off
ixgbe_common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 2656 :  *  @index: led number to blink
ixgbe_common.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 2690 :  *  @index: led number to stop blinking
ixgbe_x540.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 745 :  * @index: led number to blink
ixgbe_x540.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\intel\ixgbe) line 781 :  * @index: led number to stop blinking
lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) line 30 :   * lmc_dec_reset() functions, as well as the led controls and the
lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) line 1937 : void lmc_led_on(lmc_softc_t * const sc, u32 led) /*fold00*/
lmc_led_on in lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) :     if((~sc->lmc_miireg16) & led){ /* Already on! */
lmc_led_on in lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) :     sc->lmc_miireg16 &= ~led;
lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) line 1950 : void lmc_led_off(lmc_softc_t * const sc, u32 led) /*fold00*/
lmc_led_off in lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) :     if(sc->lmc_miireg16 & led){ /* Already set don't do anything */
lmc_led_off in lmc_main.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) :     sc->lmc_miireg16 |= led;
lmc_t1_get_link_status in lmc_media.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\wan\lmc) :      * Use the green bit to identify which one lit the led
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 	u32 led = 0;
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 	cphy_mdio_read(cphy, MDIO_MMD_PMAPMD, MDIO_CTRL2, &led);
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 		led |= LINK_ENABLE_BIT;
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 		cphy_mdio_write(cphy, MDIO_MMD_PMAPMD, MDIO_CTRL2, led);
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 		led &= ~LINK_ENABLE_BIT;
led_link in mv88x201x.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\chelsio\cxgb) : 		cphy_mdio_write(cphy, MDIO_MMD_PMAPMD, MDIO_CTRL2, led);
xcvr_init_10g_mrvl88x2011 in niu.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sun) : 	/* led activity */
pcnet32_set_phys_id in pcnet32.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\amd) : 		/* Blink the led */
peak_pciec_card in peak_pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 	struct delayed_work led_work;	/* led delayed work */
peak_pciec_write_pca9553 in peak_pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 	/* cache led mask */
peak_pciec_led_work in peak_pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 		/* if bytes counters changed, set fast blinking led */
peak_pciec_write_reg in peak_pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 			/* Reset Mode: set led on */
peak_pciec_write_reg in peak_pci.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 			/* Normal Mode: led slow blinking and start led timer */
peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) line 72 : /* led selection bits */
peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) line 76 : /* led state value */
pcan_write_canreg in peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 			/* Reset Mode: set led on */
pcan_write_canreg in peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 			/* Normal Mode: led slow blinking and start led timer */
pcan_set_leds in peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 			/* clear corresponding led bits in ccr */
pcan_led_timer in peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 		/* if bytes counters changed, set fast blinking led */
pcan_add_channels in peak_pcmcia.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\can\sja1000) : 		/* set corresponding led on in the new ccr */
phy.h (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sfc) line 37 : extern void falcon_qt202x_set_led(struct efx_nic *p, int led, int state);
qt202x_phy.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sfc) line 53 : void falcon_qt202x_set_led(struct efx_nic *p, int led, int mode)
falcon_qt202x_set_led in qt202x_phy.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\sfc) : 	int addr = MDIO_QUAKE_LED0_REG + led;
s2io.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\neterion) line 5432 :  *  s2io_set_led - control NIC led
s2io.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\neterion) line 5464 :  * @state: led setting
xirc2ps_cs.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\xircom) line 165 : /* values for the leds:    Bits 2-0 for led 1
xirc2ps_cs.c (Y:\arm\Hi3516A_SDK_V1.0.5.0\osdrv\opensource\kernel\linux-3.4.y\drivers\net\ethernet\xircom) line 166 :  *  0 disabled		   Bits 5-3 for led 2



