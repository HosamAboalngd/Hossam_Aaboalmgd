#include "NVIC_Reg.h"
#include "NVIC_Init.h"

void NVIC_vidSetEnable(u16 u16InterruptNum){
    if(u16InterruptNum<32){
        EN0=1<<(u16InterruptNum);
    }else if(u16InterruptNum<64){
        EN1=1<<(u16InterruptNum-32);
    }else if(u16InterruptNum<96){
        EN2=1<<(u16InterruptNum-64);
    }else if(u16InterruptNum<128){
        EN3=1<<(u16InterruptNum-96);
    }else if(u16InterruptNum<139){
        EN4=1<<(u16InterruptNum-128);
    }
}
void NVIC_vidClearEnable(u16 u16InterruptNum){
    if(u16InterruptNum<32){
        DIS0=1<<(u16InterruptNum);
    }else if(u16InterruptNum<64){
        DIS1=1<<(u16InterruptNum-32);
    }else if(u16InterruptNum<96){
        DIS2=1<<(u16InterruptNum-64);
    }else if(u16InterruptNum<128){
        DIS3=1<<(u16InterruptNum-96);
    }else if(u16InterruptNum<139){
        DIS4=1<<(u16InterruptNum-128);
    }
}
void NVIC_vidSetPending(u16 u16InterruptNum){
    if(u16InterruptNum<32){
        PEND0=1<<(u16InterruptNum);
    }else if(u16InterruptNum<64){
        PEND1=1<<(u16InterruptNum-32);
    }else if(u16InterruptNum<96){
        PEND2=1<<(u16InterruptNum-64);
    }else if(u16InterruptNum<128){
        PEND3=1<<(u16InterruptNum-96);
    }else if(u16InterruptNum<139){
        PEND4=1<<(u16InterruptNum-128);
    }
}
void NVIC_vidClearPending(u16 u16InterruptNum){
    if(u16InterruptNum<32){
        UNPEND0=1<<(u16InterruptNum);
    }else if(u16InterruptNum<64){
        UNPEND1=1<<(u16InterruptNum-32);
    }else if(u16InterruptNum<96){
        UNPEND2=1<<(u16InterruptNum-64);
    }else if(u16InterruptNum<128){
        UNPEND3=1<<(u16InterruptNum-96);
    }else if(u16InterruptNum<139){
        UNPEND4=1<<(u16InterruptNum-128);
    }
}
u16 NVIC_CheckActiveInterrupt(u16 u16InterruptNum){     //check if interrupt is active
    if(u16InterruptNum<32){
        return ((ACTIVE0 &(1<<(u16InterruptNum)))>>u16InterruptNum);
    }else if(u16InterruptNum<64){
        return ((ACTIVE1&(1<<(u16InterruptNum)))>>u16InterruptNum);
    }else if(u16InterruptNum<96){
        return ((ACTIVE2&(1<<(u16InterruptNum)))>>u16InterruptNum);
    }else if(u16InterruptNum<128){
        return ((ACTIVE3&(1<<(u16InterruptNum)))>>u16InterruptNum);
    }else if(u16InterruptNum<139){
        return ((ACTIVE4&(1<<(u16InterruptNum)))>>u16InterruptNum);
    }
}
void NVIC_SetPriority(u16 u16InterruptNumCpy,Periority u8PeriorityCpy){
   u8 u8GroupNum=0,u8InterruptGroupNum=0;
   u8GroupNum=(u16InterruptNumCpy)/4;    //number of the groups
   u8InterruptGroupNum=u16InterruptNumCpy-(4*u8GroupNum);
   u32 Reg_Address=0xE000E400+(4*u8GroupNum);
      switch(u8InterruptGroupNum){
          case 0:Reg(Reg_Address)=u8PeriorityCpy<<5;break;
          case 1:Reg(Reg_Address)=u8PeriorityCpy<<13;break;
          case 2:Reg(Reg_Address)=u8PeriorityCpy<<21;break;
          case 3:Reg(Reg_Address)=u8PeriorityCpy<<29;break;
          }
}
