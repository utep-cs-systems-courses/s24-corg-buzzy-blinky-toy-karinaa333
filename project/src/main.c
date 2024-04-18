#include <msp430.h>
#include "led.h"
#include "libTimer.h"

int main(void) {
  configureClocks();
  led_init();
  enableWDTInterrupts(); 

  or_sr(0x18);
}
