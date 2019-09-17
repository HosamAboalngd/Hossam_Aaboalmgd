#include"STD_Type.h"
#include"GPIO_Reg.h"
#include "GPIO_Init.h"
void GPIO_vidPinInit(GPIO_Init Data){
    /*Enable the use of the AHB for the PORT*/
   // GPIOHBCTL|=1<<Data.Port;
    /*******************************************/

    /*Enable the clock of the port*/
    RCGCGPIO|=(1<<Data.Port);
    /*******************************************/
    /*Set the direction of the Pins*/
    switch(Data.Port){
    case PORTA: GPIODIR_PORTA|=(Data.Direction<<Data.Pin); break;
    case PORTB: GPIODIR_PORTB|=(Data.Direction<<Data.Pin); break;
    case PORTC: GPIODIR_PORTC|=(Data.Direction<<Data.Pin); break;
    case PORTD: GPIODIR_PORTD|=(Data.Direction<<Data.Pin); break;
    case PORTE: GPIODIR_PORTE|=(Data.Direction<<Data.Pin); break;
    case PORTF: GPIODIR_PORTF|=(Data.Direction<<Data.Pin); break;
    }
    /*******************************************/
    /*OPEN THE FUNCTIONALITY OF THE REGISTERS */
    switch(Data.Port){
        case PORTA: GPIOCR_PORTA|=(1<<Data.Pin); break;
        case PORTB: GPIOCR_PORTB|=(1<<Data.Pin); break;
        case PORTC: GPIOCR_PORTC|=(1<<Data.Pin); break;
        case PORTD: GPIOCR_PORTD|=(1<<Data.Pin); break;
        case PORTE: GPIOCR_PORTE|=(1<<Data.Pin); break;
        case PORTF: GPIOCR_PORTF|=(1<<Data.Pin); break;
        }

    /*********************************************/
    /*Select the function of the PIN whether GPIO or Alternate Function*/
    switch(Data.Port){
    case PORTA:
        if(Data.Function==GPIO_F_){GPIOAFSEL_PORTA&=~(1<<Data.Pin);}
        else{GPIOAFSEL_PORTA|=(1<<Data.Pin);}
        break;
    case PORTB:
        if(Data.Function==GPIO_F_){GPIOAFSEL_PORTB&=~(1<<Data.Pin);}
        else{GPIOAFSEL_PORTB|=(1<<Data.Pin);}
        break;
    case PORTC:
        if(Data.Function==GPIO_F_){GPIOAFSEL_PORTC&=~(1<<Data.Pin);}
        else{GPIOAFSEL_PORTC|=(1<<Data.Pin);}
        break;
    case PORTD:
        if(Data.Function==GPIO_F_){GPIOAFSEL_PORTD&=~(1<<Data.Pin);}
        else{GPIOAFSEL_PORTD|=(1<<Data.Pin);}
        break;
    case PORTE:
        if(Data.Function==GPIO_F_){GPIOAFSEL_PORTE&=~(1<<Data.Pin);}
        else{GPIOAFSEL_PORTE|=(1<<Data.Pin);}
        break;
    case PORTF:
        if(Data.Function==GPIO_F_){GPIOAFSEL_PORTF&=~(1<<Data.Pin);}
        else{GPIOAFSEL_PORTF|=(1<<Data.Pin);}
        break;
    }
    /*******************************************/
    /*Setting the strength of each Pin*/
    switch(Data.Strength){
    case Drive_2mA:
        switch(Data.Port){
        case PORTA: GPIODR2R_PORTA|=(1<<Data.Pin); break;
        case PORTB: GPIODR2R_PORTB|=(1<<Data.Pin); break;
        case PORTC: GPIODR2R_PORTC|=(1<<Data.Pin); break;
        case PORTD: GPIODR2R_PORTD|=(1<<Data.Pin); break;
        case PORTE: GPIODR2R_PORTE|=(1<<Data.Pin); break;
        case PORTF: GPIODR2R_PORTF|=(1<<Data.Pin); break;
        }
        break;
    case Drive_4mA:
        switch(Data.Port){
        case PORTA: GPIODR4R_PORTA|=(1<<Data.Pin); break;
        case PORTB: GPIODR4R_PORTB|=(1<<Data.Pin); break;
        case PORTC: GPIODR4R_PORTC|=(1<<Data.Pin); break;
        case PORTD: GPIODR4R_PORTD|=(1<<Data.Pin); break;
        case PORTE: GPIODR4R_PORTE|=(1<<Data.Pin); break;
        case PORTF: GPIODR4R_PORTF|=(1<<Data.Pin); break;
        }
        break;
    case Drive_8mA:
        switch(Data.Port){
        case PORTA: GPIODR8R_PORTA|=(1<<Data.Pin); break;
        case PORTB: GPIODR8R_PORTB|=(1<<Data.Pin); break;
        case PORTC: GPIODR8R_PORTC|=(1<<Data.Pin); break;
        case PORTD: GPIODR8R_PORTD|=(1<<Data.Pin); break;
        case PORTE: GPIODR8R_PORTE|=(1<<Data.Pin); break;
        case PORTF: GPIODR8R_PORTF|=(1<<Data.Pin); break;
        }
        break;
    }
    /*******************************************/
    /*Chose Pad Pull-up Or Pull-Down Or Open Drain*/
    switch(Data.Pad_Type){
    case Pull_Up:
        switch(Data.Port){
        case PORTA: GPIOPUR_PORTA|=(1<<Data.Pin); break;
        case PORTB: GPIOPUR_PORTB|=(1<<Data.Pin); break;
        case PORTC: GPIOPUR_PORTC|=(1<<Data.Pin); break;
        case PORTD: GPIOPUR_PORTD|=(1<<Data.Pin); break;
        case PORTE: GPIOPUR_PORTE|=(1<<Data.Pin); break;
        case PORTF: GPIOPUR_PORTF|=(1<<Data.Pin); break;
        }
        break;
   case Pull_Down:
       switch(Data.Port){
       case PORTA: GPIOPDR_PORTA|=(1<<Data.Pin); break;
       case PORTB: GPIOPDR_PORTB|=(1<<Data.Pin); break;
       case PORTC: GPIOPDR_PORTC|=(1<<Data.Pin); break;
       case PORTD: GPIOPDR_PORTD|=(1<<Data.Pin); break;
       case PORTE: GPIOPDR_PORTE|=(1<<Data.Pin); break;
       case PORTF: GPIOPDR_PORTF|=(1<<Data.Pin); break;
       }
       break;
   case Open_Drain:
       switch(Data.Port){              //Here i need to enable Digital function
       case PORTA: GPIOODR_PORTA|=(1<<Data.Pin);GPIODEN_PORTA|=(1<<Data.Pin); break;
       case PORTB: GPIOODR_PORTB|=(1<<Data.Pin);GPIODEN_PORTB|=(1<<Data.Pin); break;
       case PORTC: GPIOODR_PORTC|=(1<<Data.Pin);GPIODEN_PORTC|=(1<<Data.Pin); break;
       case PORTD: GPIOODR_PORTD|=(1<<Data.Pin);GPIODEN_PORTD|=(1<<Data.Pin); break;
       case PORTE: GPIOODR_PORTE|=(1<<Data.Pin);GPIODEN_PORTE|=(1<<Data.Pin); break;
       case PORTF: GPIOODR_PORTF|=(1<<Data.Pin);GPIODEN_PORTF|=(1<<Data.Pin); break;
       }
       break;
    }
}
    /*******************************************/

void GPIO_vidSetPotValue(Ports PortCpy,u8 u8ValueCpy){
    switch(PortCpy){
    case PORTA:GPIODATA_PORTA_Hole=((u32)u8ValueCpy); break;
    case PORTB:GPIODATA_PORTB_Hole=((u32)u8ValueCpy); break;
    case PORTC:GPIODATA_PORTC_Hole=((u32)u8ValueCpy); break;
    case PORTD:GPIODATA_PORTD_Hole=((u32)u8ValueCpy); break;
    case PORTE:GPIODATA_PORTE_Hole=((u32)u8ValueCpy); break;
    case PORTF:GPIODATA_PORTF_Hole=((u32)u8ValueCpy); break;
    }
}
u8 GPIO_u8GetPortValue(Ports PortCpy){
    switch(PortCpy){
    case PORTA:return GPIODATA_PORTA_Hole;
    case PORTB:return GPIODATA_PORTB_Hole;
    case PORTC:return GPIODATA_PORTC_Hole;
    case PORTD:return GPIODATA_PORTD_Hole;
    case PORTE:return GPIODATA_PORTE_Hole;
    case PORTF:return GPIODATA_PORTF_Hole;
    }
}
void GPIO_vidSetPinValue(Ports PortCpy,Pins PinCpy,u8 u8ValueCpy){
    switch(PortCpy){
      case PORTA:
            switch(PinCpy){
            case Pin0:GPIODATA_PORTA_Maske_Pin0=(u8ValueCpy<<(PinCpy));break;
            case Pin1:GPIODATA_PORTA_Maske_Pin1=(u8ValueCpy<<(PinCpy));break;
            case Pin2:GPIODATA_PORTA_Maske_Pin2=(u8ValueCpy<<(PinCpy));break;
            case Pin3:GPIODATA_PORTA_Maske_Pin3=(u8ValueCpy<<(PinCpy));break;
            case Pin4:GPIODATA_PORTA_Maske_Pin4=(u8ValueCpy<<(PinCpy));break;
            case Pin5:GPIODATA_PORTA_Maske_Pin5=(u8ValueCpy<<(PinCpy));break;
            case Pin6:GPIODATA_PORTA_Maske_Pin6=(u8ValueCpy<<(PinCpy));break;
            case Pin7:GPIODATA_PORTA_Maske_Pin7=(u8ValueCpy<<(PinCpy));break;
            }
            break;
      case PORTB:
           switch(PortCpy){
             case Pin0:GPIODATA_PORTB_Maske_Pin0=(u8ValueCpy<<(PinCpy));break;
             case Pin1:GPIODATA_PORTB_Maske_Pin1=(u8ValueCpy<<(PinCpy));break;
             case Pin2:GPIODATA_PORTB_Maske_Pin2=(u8ValueCpy<<(PinCpy));break;
             case Pin3:GPIODATA_PORTB_Maske_Pin3=(u8ValueCpy<<(PinCpy));break;
             case Pin4:GPIODATA_PORTB_Maske_Pin4=(u8ValueCpy<<(PinCpy));break;
             case Pin5:GPIODATA_PORTB_Maske_Pin5=(u8ValueCpy<<(PinCpy));break;
             case Pin6:GPIODATA_PORTB_Maske_Pin6=(u8ValueCpy<<(PinCpy));break;
             case Pin7:GPIODATA_PORTB_Maske_Pin7=(u8ValueCpy<<(PinCpy));break;
             }
             break;
      case PORTC:
             switch(PinCpy){
             case Pin0:GPIODATA_PORTC_Maske_Pin0=(u8ValueCpy<<(PinCpy));break;
             case Pin1:GPIODATA_PORTC_Maske_Pin1=(u8ValueCpy<<(PinCpy));break;
             case Pin2:GPIODATA_PORTC_Maske_Pin2=(u8ValueCpy<<(PinCpy));break;
             case Pin3:GPIODATA_PORTC_Maske_Pin3=(u8ValueCpy<<(PinCpy));break;
             case Pin4:GPIODATA_PORTC_Maske_Pin4=(u8ValueCpy<<(PinCpy));break;
             case Pin5:GPIODATA_PORTC_Maske_Pin5=(u8ValueCpy<<(PinCpy));break;
             case Pin6:GPIODATA_PORTC_Maske_Pin6=(u8ValueCpy<<(PinCpy));break;
             case Pin7:GPIODATA_PORTC_Maske_Pin7=(u8ValueCpy<<(PinCpy));break;
             }
             break;
      case PORTD:
              switch(PinCpy){
              case Pin0:GPIODATA_PORTD_Maske_Pin0=(u8ValueCpy<<(PinCpy));break;
              case Pin1:GPIODATA_PORTD_Maske_Pin1=(u8ValueCpy<<(PinCpy));break;
              case Pin2:GPIODATA_PORTD_Maske_Pin2=(u8ValueCpy<<(PinCpy));break;
              case Pin3:GPIODATA_PORTD_Maske_Pin3=(u8ValueCpy<<(PinCpy));break;
              case Pin4:GPIODATA_PORTD_Maske_Pin4=(u8ValueCpy<<(PinCpy));break;
              case Pin5:GPIODATA_PORTD_Maske_Pin5=(u8ValueCpy<<(PinCpy));break;
              case Pin6:GPIODATA_PORTD_Maske_Pin6=(u8ValueCpy<<(PinCpy));break;
              case Pin7:GPIODATA_PORTD_Maske_Pin7=(u8ValueCpy<<(PinCpy));break;
              }
              break;
      case PORTE:
             switch(PinCpy){
             case Pin0:GPIODATA_PORTE_Maske_Pin0=(u8ValueCpy<<(PinCpy));break;
             case Pin1:GPIODATA_PORTE_Maske_Pin1=(u8ValueCpy<<(PinCpy));break;
             case Pin2:GPIODATA_PORTE_Maske_Pin2=(u8ValueCpy<<(PinCpy));break;
             case Pin3:GPIODATA_PORTE_Maske_Pin3=(u8ValueCpy<<(PinCpy));break;
             case Pin4:GPIODATA_PORTE_Maske_Pin4=(u8ValueCpy<<(PinCpy));break;
             case Pin5:GPIODATA_PORTE_Maske_Pin5=(u8ValueCpy<<(PinCpy));break;
             case Pin6:GPIODATA_PORTE_Maske_Pin6=(u8ValueCpy<<(PinCpy));break;
             case Pin7:GPIODATA_PORTE_Maske_Pin7=(u8ValueCpy<<(PinCpy));break;
             }
             break;
      case PORTF:
             switch(PinCpy){
             case Pin0:GPIODATA_PORTF_Maske_Pin0=(u8ValueCpy<<(PinCpy));break;
             case Pin1:GPIODATA_PORTF_Maske_Pin1=(u8ValueCpy<<(PinCpy));break;
             case Pin2:GPIODATA_PORTF_Maske_Pin2=(u8ValueCpy<<(PinCpy));break;
             case Pin3:GPIODATA_PORTF_Maske_Pin3=(u8ValueCpy<<(PinCpy));break;
             case Pin4:GPIODATA_PORTF_Maske_Pin4=(u8ValueCpy<<(PinCpy));break;
             case Pin5:GPIODATA_PORTF_Maske_Pin5=(u8ValueCpy<<(PinCpy));break;
             case Pin6:GPIODATA_PORTF_Maske_Pin6=(u8ValueCpy<<(PinCpy));break;
             case Pin7:GPIODATA_PORTF_Maske_Pin7=(u8ValueCpy<<(PinCpy));break;
             }
             break;
        }
}
u8 GPIO_u8GetPinValue(Ports PortCpy,Pins PinCpy){
    switch(PortCpy){
      case PORTA:
            switch(PinCpy){
            case Pin0:return ((GPIODATA_PORTA_Maske_Pin0&(1<<PinCpy)))>>PinCpy;break;
            case Pin1:return ((GPIODATA_PORTA_Maske_Pin1&(1<<PinCpy)))>>PinCpy;break;
            case Pin2:return ((GPIODATA_PORTA_Maske_Pin2&(1<<PinCpy)))>>PinCpy;break;
            case Pin3:return ((GPIODATA_PORTA_Maske_Pin3&(1<<PinCpy)))>>PinCpy;break;
            case Pin4:return ((GPIODATA_PORTA_Maske_Pin4&(1<<PinCpy)))>>PinCpy;break;
            case Pin5:return ((GPIODATA_PORTA_Maske_Pin5&(1<<PinCpy)))>>PinCpy;break;
            case Pin6:return ((GPIODATA_PORTA_Maske_Pin6&(1<<PinCpy)))>>PinCpy;break;
            case Pin7:return ((GPIODATA_PORTA_Maske_Pin7&(1<<PinCpy)))>>PinCpy;break;
            }
            break;
      case PORTB:
          switch(PinCpy){
            case Pin0:return((GPIODATA_PORTB_Maske_Pin0&(1<<PinCpy))>>PinCpy);break;
            case Pin1:return((GPIODATA_PORTB_Maske_Pin1&(1<<PinCpy))>>PinCpy);break;
            case Pin2:return((GPIODATA_PORTB_Maske_Pin2&(1<<PinCpy))>>PinCpy);break;
            case Pin3:return((GPIODATA_PORTB_Maske_Pin3&(1<<PinCpy))>>PinCpy);break;
            case Pin4:return((GPIODATA_PORTB_Maske_Pin4&(1<<PinCpy))>>PinCpy);break;
            case Pin5:return((GPIODATA_PORTB_Maske_Pin5&(1<<PinCpy))>>PinCpy);break;
            case Pin6:return((GPIODATA_PORTB_Maske_Pin6&(1<<PinCpy))>>PinCpy);break;
            case Pin7:return((GPIODATA_PORTB_Maske_Pin7&(1<<PinCpy))>>PinCpy);break;
            }
             break;
      case PORTC:
          switch(PinCpy){
             case Pin0:return((GPIODATA_PORTC_Maske_Pin0&(1<<PinCpy))>>PinCpy);break;
             case Pin1:return((GPIODATA_PORTC_Maske_Pin1&(1<<PinCpy))>>PinCpy);break;
             case Pin2:return((GPIODATA_PORTC_Maske_Pin2&(1<<PinCpy))>>PinCpy);break;
             case Pin3:return((GPIODATA_PORTC_Maske_Pin3&(1<<PinCpy))>>PinCpy);break;
             case Pin4:return((GPIODATA_PORTC_Maske_Pin4&(1<<PinCpy))>>PinCpy);break;
             case Pin5:return((GPIODATA_PORTC_Maske_Pin5&(1<<PinCpy))>>PinCpy);break;
             case Pin6:return((GPIODATA_PORTC_Maske_Pin6&(1<<PinCpy))>>PinCpy);break;
             case Pin7:return((GPIODATA_PORTC_Maske_Pin7&(1<<PinCpy))>>PinCpy);break;
             }
             break;
      case PORTD:
          switch(PinCpy){
             case Pin0:return((GPIODATA_PORTD_Maske_Pin0&(1<<PinCpy))>>PinCpy);break;
             case Pin1:return((GPIODATA_PORTD_Maske_Pin1&(1<<PinCpy))>>PinCpy);break;
             case Pin2:return((GPIODATA_PORTD_Maske_Pin2&(1<<PinCpy))>>PinCpy);break;
             case Pin3:return((GPIODATA_PORTD_Maske_Pin3&(1<<PinCpy))>>PinCpy);break;
             case Pin4:return((GPIODATA_PORTD_Maske_Pin4&(1<<PinCpy))>>PinCpy);break;
             case Pin5:return((GPIODATA_PORTD_Maske_Pin5&(1<<PinCpy))>>PinCpy);break;
             case Pin6:return((GPIODATA_PORTD_Maske_Pin6&(1<<PinCpy))>>PinCpy);break;
             case Pin7:return((GPIODATA_PORTD_Maske_Pin7&(1<<PinCpy))>>PinCpy);break;
             }
             break;
      case PORTE:
          switch(PinCpy){
            case Pin0:return((GPIODATA_PORTE_Maske_Pin0&(1<<PinCpy))>>PinCpy);break;
            case Pin1:return((GPIODATA_PORTE_Maske_Pin1&(1<<PinCpy))>>PinCpy);break;
            case Pin2:return((GPIODATA_PORTE_Maske_Pin2&(1<<PinCpy))>>PinCpy);break;
            case Pin3:return((GPIODATA_PORTE_Maske_Pin3&(1<<PinCpy))>>PinCpy);break;
            case Pin4:return((GPIODATA_PORTE_Maske_Pin4&(1<<PinCpy))>>PinCpy);break;
            case Pin5:return((GPIODATA_PORTE_Maske_Pin5&(1<<PinCpy))>>PinCpy);break;
            case Pin6:return((GPIODATA_PORTE_Maske_Pin6&(1<<PinCpy))>>PinCpy);break;
            case Pin7:return((GPIODATA_PORTE_Maske_Pin7&(1<<PinCpy))>>PinCpy);break;
            }
            break;
      case PORTF:
          switch(PinCpy){
            case Pin0:return((GPIODATA_PORTF_Maske_Pin0&(1<<PinCpy))>>PinCpy);break;
            case Pin1:return((GPIODATA_PORTF_Maske_Pin1&(1<<PinCpy))>>PinCpy);break;
            case Pin2:return((GPIODATA_PORTF_Maske_Pin2&(1<<PinCpy))>>PinCpy);break;
            case Pin3:return((GPIODATA_PORTF_Maske_Pin3&(1<<PinCpy))>>PinCpy);break;
            case Pin4:return((GPIODATA_PORTF_Maske_Pin4&(1<<PinCpy))>>PinCpy);break;
            case Pin5:return((GPIODATA_PORTF_Maske_Pin5&(1<<PinCpy))>>PinCpy);break;
            case Pin6:return((GPIODATA_PORTF_Maske_Pin6&(1<<PinCpy))>>PinCpy);break;
            case Pin7:return((GPIODATA_PORTF_Maske_Pin7&(1<<PinCpy))>>PinCpy);break;
            }
            break;
        }
}

void GPIO_vidPortInit(GPIO_Init Data){
       /*Enable the use of the AHB for the PORT*/
      // GPIOHBCTL|=1<<Data.Port;
       /*******************************************/

       /*Enable the clock of the port*/
       RCGCGPIO|=(1<<Data.Port);
       /*******************************************/
       /*Set the direction of the Pins*/
       switch(Data.Port){
       case PORTA: GPIODIR_PORTA|=(Data.Direction); break;
       case PORTB: GPIODIR_PORTB|=(Data.Direction); break;
       case PORTC: GPIODIR_PORTC|=(Data.Direction); break;
       case PORTD: GPIODIR_PORTD|=(Data.Direction); break;
       case PORTE: GPIODIR_PORTE|=(Data.Direction); break;
       case PORTF: GPIODIR_PORTF|=(Data.Direction); break;
       }
       /*******************************************/
       /*OPEN THE FUNCTIONALITY OF THE REGISTERS */
       switch(Data.Port){
           case PORTA: GPIOCR_PORTA=All_High; break;
           case PORTB: GPIOCR_PORTB=All_High; break;
           case PORTC: GPIOCR_PORTC=All_High; break;
           case PORTD: GPIOCR_PORTD=All_High; break;
           case PORTE: GPIOCR_PORTE=All_High; break;
           case PORTF: GPIOCR_PORTF=All_High; break;
           }

       /*********************************************/
       /*Select the function of the PIN whether GPIO or Alternate Function*/
       switch(Data.Port){
       case PORTA:
           if(Data.Function==GPIO_F_){GPIOAFSEL_PORTA=All_Low;}
           else{GPIOAFSEL_PORTA=All_High;}
           break;
       case PORTB:
           if(Data.Function==GPIO_F_){GPIOAFSEL_PORTB=All_Low;}
           else{GPIOAFSEL_PORTB=All_High;}
           break;
       case PORTC:
           if(Data.Function==GPIO_F_){GPIOAFSEL_PORTC=All_Low;}
           else{GPIOAFSEL_PORTC=All_High;}
           break;
       case PORTD:
           if(Data.Function==GPIO_F_){GPIOAFSEL_PORTD=All_Low;}
           else{GPIOAFSEL_PORTD=All_High;}
           break;
       case PORTE:
           if(Data.Function==GPIO_F_){GPIOAFSEL_PORTE=All_Low;}
           else{GPIOAFSEL_PORTE=All_High;}
           break;
       case PORTF:
           if(Data.Function==GPIO_F_){GPIOAFSEL_PORTF=All_Low;}
           else{GPIOAFSEL_PORTF=All_High;}
           break;
       }
       /*******************************************/
       /*Setting the strength of each Pin*/
       switch(Data.Strength){
       case Drive_2mA:
           switch(Data.Port){
           case PORTA: GPIODR2R_PORTA=All_High; break;
           case PORTB: GPIODR2R_PORTB=All_High; break;
           case PORTC: GPIODR2R_PORTC=All_High; break;
           case PORTD: GPIODR2R_PORTD=All_High; break;
           case PORTE: GPIODR2R_PORTE=All_High; break;
           case PORTF: GPIODR2R_PORTF=All_High; break;
           }
           break;
       case Drive_4mA:
           switch(Data.Port){
           case PORTA: GPIODR4R_PORTA=All_High; break;
           case PORTB: GPIODR4R_PORTB=All_High; break;
           case PORTC: GPIODR4R_PORTC=All_High; break;
           case PORTD: GPIODR4R_PORTD=All_High; break;
           case PORTE: GPIODR4R_PORTE=All_High; break;
           case PORTF: GPIODR4R_PORTF=All_High; break;
           }
           break;
       case Drive_8mA:
           switch(Data.Port){
           case PORTA: GPIODR8R_PORTA=All_High; break;
           case PORTB: GPIODR8R_PORTB=All_High; break;
           case PORTC: GPIODR8R_PORTC=All_High; break;
           case PORTD: GPIODR8R_PORTD=All_High; break;
           case PORTE: GPIODR8R_PORTE=All_High; break;
           case PORTF: GPIODR8R_PORTF=All_High; break;
           }
           break;
       }
       /*******************************************/
       /*Chose Pad Pull-up Or Pull-Down Or Open Drain*/
       switch(Data.Pad_Type){
       case Pull_Up:
           switch(Data.Port){
           case PORTA: GPIOPUR_PORTA=All_High; break;
           case PORTB: GPIOPUR_PORTB=All_High; break;
           case PORTC: GPIOPUR_PORTC=All_High; break;
           case PORTD: GPIOPUR_PORTD=All_High; break;
           case PORTE: GPIOPUR_PORTE=All_High; break;
           case PORTF: GPIOPUR_PORTF=All_High; break;
           }
           break;
      case Pull_Down:
          switch(Data.Port){
          case PORTA: GPIOPDR_PORTA=All_High; break;
          case PORTB: GPIOPDR_PORTB=All_High; break;
          case PORTC: GPIOPDR_PORTC=All_High; break;
          case PORTD: GPIOPDR_PORTD=All_High; break;
          case PORTE: GPIOPDR_PORTE=All_High; break;
          case PORTF: GPIOPDR_PORTF=All_High; break;
          }
          break;
      case Open_Drain:
          switch(Data.Port){              //Here i need to enable Digital function
          case PORTA: GPIOODR_PORTA=All_High;GPIODEN_PORTA=All_High; break;
          case PORTB: GPIOODR_PORTB=All_High;GPIODEN_PORTB=All_High; break;
          case PORTC: GPIOODR_PORTC=All_High;GPIODEN_PORTC=All_High; break;
          case PORTD: GPIOODR_PORTD=All_High;GPIODEN_PORTD=All_High; break;
          case PORTE: GPIOODR_PORTE=All_High;GPIODEN_PORTE=All_High; break;
          case PORTF: GPIOODR_PORTF=All_High;GPIODEN_PORTF=All_High; break;
          }
          break;
       }
       /*******************************************/
   /*Enable the GPIO As Digital or Analog*/
   switch(Data.Digital_Analog){
   case Digital:
       switch(Data.Port){
       case PORTA:GPIODEN_PORTA=All_High;break;
       case PORTB:GPIODEN_PORTB=All_High;break;
       case PORTC:GPIODEN_PORTC=All_High;break;
       case PORTD:GPIODEN_PORTD=All_High;break;
       case PORTE:GPIODEN_PORTE=All_High;break;
       case PORTF:GPIODEN_PORTF=All_High;break;
       }

       break;
   case Analog:
       switch(Data.Port){
       case PORTA:GPIOAMSEL_PORTA=All_High;break;
       case PORTB:GPIOAMSEL_PORTB=All_High;break;
       case PORTC:GPIOAMSEL_PORTC=All_High;break;
       case PORTD:GPIOAMSEL_PORTD=All_High;break;
       case PORTE:GPIOAMSEL_PORTE=All_High;break;
       case PORTF:GPIOAMSEL_PORTF=All_High;break;
       }
       break;
   }
   /*******************************************/
}


void GPIO_vidSetExtInterrupt(Ports PortCpy,Pins PinCpy,Events EventCpy){
/*Interrupt Mask*/
    switch(PortCpy){
            case PORTA: GPIOIM_PORTA|=(1<<PinCpy); break;
            case PORTB: GPIOIM_PORTB|=(1<<PinCpy); break;
            case PORTC: GPIOIM_PORTC|=(1<<PinCpy); break;
            case PORTD: GPIOIM_PORTD|=(1<<PinCpy); break;
            case PORTE: GPIOIM_PORTE|=(1<<PinCpy); break;
            case PORTF: GPIOIM_PORTF|=(1<<PinCpy); break;
            }
    /**************/
/*Configure Level or edge sensitive*/
    if((EventCpy==High_Level)||(EventCpy==Low_Level)){
      switch(PortCpy){
               case PORTA: GPIOIS_PORTA|=(1<<PinCpy); break;
               case PORTB: GPIOIS_PORTB|=(1<<PinCpy); break;
               case PORTC: GPIOIS_PORTC|=(1<<PinCpy); break;
               case PORTD: GPIOIS_PORTD|=(1<<PinCpy); break;
               case PORTE: GPIOIS_PORTE|=(1<<PinCpy); break;
               case PORTF: GPIOIS_PORTF|=(1<<PinCpy); break;
               }
    }
    /***********/
/*Event which fire interrupt*/
if(EventCpy==Any_Edge){
    switch(PortCpy){
       case PORTA: GPIOIBE_PORTA|=(1<<PinCpy); break;
       case PORTB: GPIOIBE_PORTB|=(1<<PinCpy); break;
       case PORTC: GPIOIBE_PORTC|=(1<<PinCpy); break;
       case PORTD: GPIOIBE_PORTD|=(1<<PinCpy); break;
       case PORTE: GPIOIBE_PORTE|=(1<<PinCpy); break;
       case PORTF: GPIOIBE_PORTF|=(1<<PinCpy); break;
       }
}else if((EventCpy==High_Level)||(EventCpy==Rising_Edge)){
    switch(PortCpy){
          case PORTA: GPIOIEV_PORTA|=(1<<PinCpy); break;
          case PORTB: GPIOIEV_PORTB|=(1<<PinCpy); break;
          case PORTC: GPIOIEV_PORTC|=(1<<PinCpy); break;
          case PORTD: GPIOIEV_PORTD|=(1<<PinCpy); break;
          case PORTE: GPIOIEV_PORTE|=(1<<PinCpy); break;
          case PORTF: GPIOIEV_PORTF|=(1<<PinCpy); break;
          }
}
    /**********/
/*Clear the Flags*/
switch(PortCpy){
          case PORTA: GPIOIEV_PORTA&=~(1<<PinCpy); break;
          case PORTB: GPIOIEV_PORTB&=~(1<<PinCpy); break;
          case PORTC: GPIOIEV_PORTC&=~(1<<PinCpy); break;
          case PORTD: GPIOIEV_PORTD&=~(1<<PinCpy); break;
          case PORTE: GPIOIEV_PORTE&=~(1<<PinCpy); break;
          case PORTF: GPIOIEV_PORTF&=~(1<<PinCpy); break;
          }
/********/
}

void GPIO_vidExtInterruptDisable(Ports PortCpy,Pins PinCpy){
    /*Interrupt Mask*/
        switch(PortCpy){
                case PORTA: GPIOIM_PORTA&=~(1<<PinCpy); break;
                case PORTB: GPIOIM_PORTB&=~(1<<PinCpy); break;
                case PORTC: GPIOIM_PORTC&=~(1<<PinCpy); break;
                case PORTD: GPIOIM_PORTD&=~(1<<PinCpy); break;
                case PORTE: GPIOIM_PORTE&=~(1<<PinCpy); break;
                case PORTF: GPIOIM_PORTF&=~(1<<PinCpy); break;
                }
        /**************/
}
