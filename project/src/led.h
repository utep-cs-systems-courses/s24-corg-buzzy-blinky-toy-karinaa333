#ifndef led_included
#define led_included
#include <msp430.h>

#define LED_GREEN BIT0           // P1.0
#define LED_RED BIT6             // P1.6
#define LEDS (BIT0 | BIT6)

extern unsigned char led_changed;
extern unsigned char red_on, green_on;

void led_init();
void led_update();

#endif
