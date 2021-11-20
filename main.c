#include <lpc17xx.h>
#include <stdint.h>
#include <uart.h>
unit8_t i=0;
int main(void)
{
  char msg[]="Hello World ";
  Init_UART0();
  while (msg[i]!='\0')
  {
    UART0_Trasmit(msg[i]);
    UART0_Status();
    i++;
  }
}
