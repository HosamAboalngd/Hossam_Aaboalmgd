#include "GPIO_Init.h"
int main(void)
{

GPIO_Init Data={PORTF,Pin0,OUT,GPIO_F_,Drive_4mA,Pull_Down,Digital};
GPIO_vidPinInit(Data);
GPIO_Init Data1={PORTF,Pin1,OUT,GPIO_F_,Drive_4mA,Pull_Down,Digital};
GPIO_vidPinInit(Data1);
GPIO_Init Data2={PORTF,Pin2,OUT,GPIO_F_,Drive_4mA,Pull_Down,Digital};
GPIO_vidPinInit(Data2);
GPIO_Init Data3={PORTF,Pin3,OUT,GPIO_F_,Drive_4mA,Pull_Down,Digital};
GPIO_vidPinInit(Data3);
GPIO_Init Data4={PORTF,Pin4,OUT,GPIO_F_,Drive_4mA,Pull_Down,Digital};
GPIO_vidPinInit(Data4);



//GPIO_vidSetPotValue(PORTF,All_High);

GPIO_vidSetPinValue(PORTF, Pin0, High);
GPIO_vidSetPinValue(PORTF, Pin1, High);
GPIO_vidSetPinValue(PORTF, Pin2, High);
GPIO_vidSetPinValue(PORTF, Pin3, High);
GPIO_vidSetPinValue(PORTF, Pin4, High);
u8 x =GPIO_u8GetPinValue(PORTF, Pin0);
u8 x1=GPIO_u8GetPinValue(PORTF, Pin1);
u8 x2=GPIO_u8GetPinValue(PORTF, Pin2);
u8 x3 =GPIO_u8GetPinValue(PORTF,Pin3);
u8 x4 =GPIO_u8GetPinValue(PORTF, Pin4);

while(1){

}
return 0;
}
