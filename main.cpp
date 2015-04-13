
#include "mbed.h"
#include "LPC17xx.h"


uint32_t temp;

int main(void) {
    GPIO_PWRUP -> PCONP |=(1<<15);   //power up the GPIO pins
    LPC_GPIO3->FIODIR|=1<<26;        //Configure the direction to the pin 26 of port 3
    while(1) {
         LPC_GPIO3->FIOPIN|=1<<26;    //toggle the pin by setting the PIN high and low
        //myled = 1;
        wait(0.2);
         LPC_GPIO3->FIOPIN &=~(1<<26);
        wait(0.2);
    }
    return 0;
}
