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

    int count = 0;

  while(1){

    LED_toggle(LED0);
    
    if (count % 2 == 0) {
      LED_toggle(LED1);
      LED_toggle(LED2);
      LED_toggle(LED3);
    }
    
    count++;
    k_msleep(250);
  }
  return 0;
}
