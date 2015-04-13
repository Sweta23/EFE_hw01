#ifndef __LPC17xx_H__
#define __LPC17xx_H__

#include "system_LPC17xx.h"                 // System Header                                      
typedef struct
{
  __IO uint32_t PCON;
  __IO uint32_t PCONP;
       uint32_t RESERVED3[15];
  
typedef struct
{
  __IO uint32_t PINSEL7;   //PINSEL7 register for PORT3[26] i.e 26th pin on Devboard
  } LPC_PINCON_TypeDef;

typedef struct             
{
    __IO uint32_t FIODIR;
    };
    struct {
      __IO uint8_t  FIODIR0;
      __IO uint8_t  FIODIR1;
      __IO uint8_t  FIODIR2;
      __IO uint8_t  FIODIR3;
    };
  };
  union {
    __IO uint32_t FIOPIN;
    };
    struct {
      __IO uint8_t  FIOPIN0;
      __IO uint8_t  FIOPIN1;
      __IO uint8_t  FIOPIN2;
      __IO uint8_t  FIOPIN3;
    };
  };
  union {
    __IO uint32_t FIOSET;
    };
    struct {
      __IO uint8_t  FIOSET0;
      __IO uint8_t  FIOSET1;
      __IO uint8_t  FIOSET2;
      __IO uint8_t  FIOSET3;
    };
  };
  union {
    __O  uint32_t FIOCLR;
    struct {
      __O  uint8_t  FIOCLR0;
      __O  uint8_t  FIOCLR1;
      __O  uint8_t  FIOCLR2;
      __O  uint8_t  FIOCLR3;
    };
  };
} LPC_GPIO_TypeDef;


// Base addresses for registers                                                           
#define LPC_GPIO_BASE         (0x2009C000UL)
#define LPC_SC                ((LPC_SC_TypeDef        *) LPC_SC_BASE       )
#endif  // __LPC17xx_H__
