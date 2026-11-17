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
    LED_set(LED0, LED_ON);
    LED_set(LED1, LED_ON);
    k_msleep(250);
    LED_set(LED2, LED_ON);
    LED_set(LED3, LED_ON);
    k_msleep(250);
    LED_set(LED0, LED_OFF);
    LED_set(LED2, LED_OFF);
    k_msleep(250);
    LED_set(LED1, LED_OFF);
    LED_set(LED3, LED_OFF);
    k_msleep(250);
    
  }
  return 0;
}
