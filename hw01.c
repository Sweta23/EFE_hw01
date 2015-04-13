#include “stdint.h”
#include “stdio.h”
#include “delay.h”
#include “inttypes.h”


#define GPIO=0x2009C000
#define DIREN=0x2009C060
#define DIRSET=0X2009C078
#define DIRCLR=0x2009C07C


int main(void)
{
uint32_t *p = (uint32_t*)GPIO;
uint32_t *q = (uint32_t*)DIREN;

*p    & = 0xFFCFFFFF;
*q    |  = 0x04000000;

while(1) {  
DIRSET  | = 0x04000000;
DIRCLR | = 0x04000000;
}
return 0;
}
