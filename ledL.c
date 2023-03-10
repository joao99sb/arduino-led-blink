#include <avr/io.h>
#include <util/delay.h>

int main(void)
{

  // set PORTB5 as an output
  DDRB = DDRB | (1 << DDB5);

  while (1)
  {

    // set portb5
    PORTB = PORTB | (1 << PORTB5);

    _delay_ms(1000);

    // unset
    PORTB = PORTB & ~(1 << PORTB5);

    _delay_ms(1000);
  }
}
