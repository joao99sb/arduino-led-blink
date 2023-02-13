Para ligar o led, primeiro tem que ir no datasheet para ver qual é a porta que controla ele (https://docs.arduino.cc/static/d2de412a57c1111cd6be956b74bc0f2b/A000066-datasheet.pdf), no caso do led que eu estou querendo acender é a PB5, ou seja, eu preciso colocar o bit 1 nesse registrador

Primeiro de tudo eu preciso transformar o PB5 em um output, para isso eu preciso configurar o DDR do PB, se o DDR estiver setado com o operador logico verdadeiro, então a porta estara configurada como um output, se estiver como falso, será um input(mais informacoes no datasheet do atmega328p ~> https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf)


Após isso, precisei setar o bit manulamente usando uma operação de bitwise na porta desejada