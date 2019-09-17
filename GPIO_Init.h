#ifndef GPIO_INIT_H
#define GPIO_INIT_H
#include "STD_Type.h"
typedef enum{PORTA,PORTB,PORTC,PORTD,PORTE,PORTF}Ports ;
typedef enum{Pin0,Pin1,Pin2,Pin3,Pin4,Pin5,Pin6,Pin7}Pins ;
typedef enum{INPUT,OUT,All_INPUT=0,All_OUTPUT=0xff}Directions ;
typedef enum{GPIO_F_,Alternate_Function}Functions ;
typedef enum{Drive_2mA,Drive_4mA,Drive_8mA}Strengthes ;
typedef enum{Pull_Up,Pull_Down,Open_Drain}Pad_Types ;
typedef enum{Digital,Analog}DigitalOrAnalog ;
typedef enum{Low,High,All_High=0xFF,All_Low=0x00}Value ;
typedef enum{High_Level,Low_Level,Rising_Edge,Falling_Edge,Any_Edge}Events ;


typedef struct {
    Ports Port;
    Pins Pin;
    Directions Direction;
    Functions Function;
    Strengthes Strength;
    Pad_Types Pad_Type;
    DigitalOrAnalog	Digital_Analog;
}GPIO_Init;

void GPIO_vidPinInit(GPIO_Init Data);
void GPIO_vidPortInit(GPIO_Init Port_Data);
void GPIO_vidPortInit(GPIO_Init Port_Data);
void GPIO_vidSetPotValue(Ports PortCpy,u8 u8ValueCpy);
u8 GPIO_u8GetPortValue(Ports PortCpy);
void GPIO_vidSetPinValue(Ports PortCpy,Pins PinCpy,u8 u8ValueCpy);
u8 GPIO_u8GetPinValue(Ports PortCpy,Pins PinCpy);
void GPIO_vidSetExtInterrupt(Ports PortCpy,Pins PinCpy,Events EventCpy);
void GPIO_vidExtInterruptDisable(Ports PortCpy,Pins PinCpy);



#endif
