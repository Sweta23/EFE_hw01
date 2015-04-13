
#include "mbed.h"
#include "LPC17xx.h"


uint32_t temp;

int main(void) {
    GPIO_PWRUP -> PCONP |=(1<<15);
    LPC_GPIO3->FIODIR|=1<<26;
    while(1) {
         LPC_GPIO3->FIOPIN|=1<<26;
        //myled = 1;
        wait(0.2);
         LPC_GPIO3->FIOPIN &=~(1<<26);
        wait(0.2);
    }
    return 0;
}
