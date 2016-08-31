/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  // Configure PB5 as an output
  DDRB = 0b00100000;

  while(1) {
    PORTB = 0b00100000; // Turn on PB5
    _delay_ms(750);

    PORTB = 0b00000000; // Turn off PB5
    _delay_ms(750);
  }
}
