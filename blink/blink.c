// make flash

#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__ 
#endif

#include <avr/io.h>       
#include <util/delay.h>

#define DELAY 85
#define LED_PORT   PORTB
#define LED_DDR    DDRB // Data Direction Register B:

int main(void) {

  uint8_t i;

  // ----------- initialize ----------------- // 
  LED_DDR = 0xff; 

  // ----------- event loop ----------------- //  
  while (1) {

    for (i = 0; i < 8; i++) {
      LED_PORT |= (1 << i);
      _delay_ms(DELAY);    
    }

    for (i = 0; i < 8; i++) {
      LED_PORT &= ~(1 << i);
      _delay_ms(DELAY);    
    }

    _delay_ms(5 * DELAY);                                
                                                
    for (i = 7; i < 255; i--) {
      LED_PORT |= (1 << i);                   
      _delay_ms(DELAY);                      
    }

    for (i = 7; i < 255; i--) {
      LED_PORT &= ~(1 << i);                
      _delay_ms(DELAY);                     
    }
    _delay_ms(5 * DELAY);                                            
  } 

  return (0); 
}
