// make flash

#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__ 
#endif
#include <avr/io.h>       
#include <util/delay.h>  

int main(void) {

  DDRB |= 0b00000001;     // Data Direction Register B:
  while (1) {

    PORTB = 0b00000001;   // Turn on first LED bit/pin in PORTB 
    _delay_ms(1000);              

    PORTB = 0b00000000;   // Turn off all B pins, including LED
    _delay_ms(1000);  
  } 
  return 0; 
}
