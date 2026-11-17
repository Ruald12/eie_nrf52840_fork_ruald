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
    LED_blink(LED0, LED_2HZ);
    LED_blink(LED1, LED_4HZ);
    LED_blink(LED2, LED_4HZ);
    LED_blink(LED3, LED_4HZ);

    k_msleep(1000);
    
  }
  return 0;
}
