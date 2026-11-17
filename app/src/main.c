/**
 * @file main.c
 */

#include <inttypes.h>

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include "BTN.h"
#include "LED.h"



int main(void) {
  LED_init();

  while(1){
    LED_toggle(LED0);
    LED_toggle(LED1);
    LED_toggle(LED2);
    LED_toggle(LED3);
    k_msleep(500);


  }
  return 0;
}
