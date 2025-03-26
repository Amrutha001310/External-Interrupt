#include<lpc21xx.h>
void external_intp(void_irq){
	EXTINT=0x02;
	IOCLR0=0x0f;
	VICVectAddr=0x00;
}
void external_init(void){
	PINSEL0=0x20000000;
	EXTMODE=0x02;
	EXTPOLAR=0x02;
	VICVectAddr0=(unsigned long)external_intp;
	VICVectCntl0=0x2f;
	VICIntEnable=0x8000;
}
	