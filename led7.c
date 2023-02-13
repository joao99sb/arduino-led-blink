#include <avr/io.h>
#include <util/delay.h>


#define TRUE 1

int main(void)
{

  // set PORTD7 as an output
  DDRD = DDRD | (1 << DDD7);


  while (TRUE)
  {

    // set port
    PORTD = PORTD | (1 << PORTD7);

    _delay_ms(100);

    // unset
    PORTD = PORTD & ~(1 << PORTD7);

    _delay_ms(100);
  }
}
