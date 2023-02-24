// Where is the led connected?
// Port: B
// Pin: 5

//define um tipo de 8bits
typedef unsigned int u8 __attribute__((__mode__(__QI__)));
#define PERIPH_BASE (0x20)
#define PORTB_OFFSET (0x05)

#define DDRB_OFFSET (0x04)

#define REG_PORTB *((volatile u8 *)PORTB_OFFSET + PERIPH_BASE)
#define REG_DDRB *((volatile u8 *)DDRB_OFFSET + PERIPH_BASE)

#define DDB5 5
#define PINB5 5

int main(void)
{
	REG_DDRB = REG_DDRB | (1 << DDB5);
	while (1)
	{
		REG_PORTB = REG_PORTB | (1 << PINB5);

		for (long i = 0; i < 1e5; i++)
		{
			asm volatile("nop");
		}

		REG_PORTB = REG_PORTB & ~(1 << PINB5);

		for (long i = 0; i < 1e5; i++)
		{
			asm volatile("nop");
		}
	}

	return 0;
}
