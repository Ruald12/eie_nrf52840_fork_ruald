/**
 * @file main.c
 */

#include <inttypes.h>

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include <stdint.h>

#include "BTN.h"
#include "LED.h"

# define SLEEP_MS 1

int count = 0;

int main(void) {
  if(LED_init() != 0){
    return 0;
  }

  if(BTN_init() != 0){
    return 0;
  }

  while(1){
    if (BTN_check_clear_pressed(BTN0)){
      printk("Button 0 pressed!\n");
      count++;
    }
    k_msleep(SLEEP_MS);

    if(count > 15){
      count = 0;
    }

    if (count % 2 == 1) {
      LED_set(LED0, LED_ON);
    } else {
      LED_set(LED0, LED_OFF);
    }
    if ((count / 2) % 2 == 1) {
      LED_set(LED1, LED_ON);
    } else {
      LED_set(LED1, LED_OFF);
    }
    if ((count / 4) % 2 == 1) {
      LED_set(LED2, LED_ON);
    } else {
      LED_set(LED2, LED_OFF);
    }
    if ((count / 8) % 2 == 1) {
      LED_set(LED3, LED_ON);
    } else {
      LED_set(LED3, LED_OFF);
    }
  }
  return 0;
}
