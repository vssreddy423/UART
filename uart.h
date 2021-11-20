#ifndef __UART_H__
#define __UART_H__
// Peripheral clock Enable
#define UART0_PCLK()                LPC_SC->PCONP=(1<<3)
// Input Output Pins - TXD0,RXD0
#define UART0_IOpins()              LPC_PINCON->PINSEL0=(5<<4)
// FIFO Control register -FIFO Enable, Rx reset, Tx reset
#define UART0_FIFOcontrol()         LPC_UART0->FCR=(7<<0)
// Line control - No.of databits, stop bit, baudrate DLAB
#define UART0_LCR()                 LPC_UART0->LCR=(3<<0)|(0<<2)|(1<<7)
// DLAB disable for access THR & RBR read-only
#define UART0_Dis_DLAB()            LPC_UART0->DLAB=(3<<0)|(0<<7)
// Baudrate calcutations
#define UART0_FDR()                 LPC_UART0->FDR=(0x10<<0)
#define UART0_DLL()                 LPC_UART0->DLL=162
#define UART0_DLM()                 LPC_UART0->DLM=0
// Data Trasfer
#define UART0_Trasmit(data)         LPC_UART0->THR->data
// Status of data transfer
#define UART0_status()              while(LPC_UART0->LSR & (0x20))
