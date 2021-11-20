#include <lpc17xx.h>
#include <stdint.h>
#include <uart.h>

__inline static Set_UART0_Base_Config(void)
{
  UART0_PCLK();
  UART0_IOpins();
}
__inline static Set_UART0_Core_Config(void)
{
  UART0_FIFO();
  UART0_LCR();
  UART0_FDR();
  UART0_DLL();
  UART0_DLM();
  UART0_Dis_DLAB();
}
void Init_UART0(void)
{
  Set_UART0_Base_Config();
  Set_UART0_Core_Config();
}
