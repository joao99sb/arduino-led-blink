default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o ledL.o ledL.c
	avr-gcc -o ledL.bin ledL.o
	avr-objcopy -O ihex -R .eeprom ledL.bin ledL.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b115200 -U flash:w:ledL.hex

led_7:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o led7.o led7.c
	avr-gcc -o led7.bin led7.o
	avr-objcopy -O ihex -R .eeprom led7.bin led7.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b115200 -U flash:w:led7.hex

clear:
	rm -Rf *.o *.bin *.hex