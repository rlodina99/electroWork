/* Blinker Demo */

#define MCU  atmega328p
#define F_CPU  1000000UL

// ------- Preamble -------- //
#include <avr/io.h>                        /* Defines pins, ports, etc */
#include <util/delay.h>                     /* Functions to waste time */


int main(void) {

  // -------- Inits --------- //
  DDRB |= 0b0000001;            /* Data Direction Register B:
                                   writing a one to the bit
                                   enables output. */

  // ------ Event loop ------ //
  while (1) {

    PORTB =  0b00000001;          /* Turn on first LED bit/pin in PORTB */
    _delay_ms(200);                                           /* wait */

    PORTB = PORTB ^ 1;          /* Turn off all B pins, including LED */
     _delay_ms(800);                                           /* wait */

  }                                                  /* End event loop */
  return (0);                            /* This line is never reached */
}
