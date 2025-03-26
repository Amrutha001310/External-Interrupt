#include<lpc21xx.h>
extern void external_init(void);
void main(){
	external_init();
	IODIR0=0x0f;
	IOSET0=0x0f;
	while(1){
	}
}