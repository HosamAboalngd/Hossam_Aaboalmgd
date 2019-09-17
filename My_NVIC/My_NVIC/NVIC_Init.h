

#ifndef NVIC_INIT_H_
#define NVIC_INIT_H_
#include "STD_Type.h"

typedef enum{Priority0,Priority1,Priority2,Priority3,Priority4,Priority5,Priority6,Priority7}Periority;
#define Reg(y) *((volatile u32*)y)

void NVIC_vidSetEnable(u16 u16InterruptNum);
void NVIC_vidClearEnable(u16 u16InterruptNum);
void NVIC_vidSetPending(u16 u16InterruptNum);
void NVIC_vidClearPending(u16 u16InterruptNum);
u16 NVIC_CheckActiveInterrupt(u16 u16InterruptNum);
void NVIC_SetPriority(u16 u16InterruptNumCpy,Periority u8PeriorityCpy);
#endif /* NVIC_INIT_H_ */
