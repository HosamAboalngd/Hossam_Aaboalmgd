
#ifndef NVIC_REG_H_
#define NVIC_REG_H_

/*Nested Vectored Interrupt Controller (NVIC) Registers*/
#define EN0      *((volatile u32*)0xE000E100)            //Interrupt 0-31 Set Enable
#define EN1      *((volatile u32*)0xE000E104)            //Interrupt 32-63 Set Enable
#define EN2      *((volatile u32*)0xE000E108)            //Interrupt 64-95 Set Enable
#define EN3      *((volatile u32*)0xE000E10C)            //Interrupt 96-127 Set Enable
#define EN4      *((volatile u32*)0xE000E110)            //Interrupt 128-138 Set Enable
#define DIS0     *((volatile u32*)0xE000E180)            //Interrupt 0-31 Clear Enable
#define DIS1     *((volatile u32*)0xE000E184)            //Interrupt 32-63 Clear Enable
#define DIS2     *((volatile u32*)0xE000E188)            //Interrupt 64-95 Clear Enable
#define DIS3     *((volatile u32*)0xE000E18C)            //Interrupt 96-127 Clear Enable
#define DIS4     *((volatile u32*)0xE000E190)            //Interrupt 128-138 Clear Enable
#define PEND0    *((volatile u32*)0xE000E200)            //Interrupt 0-31 Set Pending
#define PEND1    *((volatile u32*)0xE000E204)            //Interrupt 32-63 Set Pending
#define PEND2    *((volatile u32*)0xE000E208)            //Interrupt 64-95 Set Pending
#define PEND3    *((volatile u32*)0xE000E20C)            //Interrupt 96-127 Set Pending
#define PEND4    *((volatile u32*)0xE000E210)            //Interrupt 128-138 Set Pending
#define UNPEND0  *((volatile u32*)0xE000E280)            //Interrupt 0-31 Clear Pending
#define UNPEND1  *((volatile u32*)0xE000E284)            //Interrupt 32-63 Clear Pending
#define UNPEND2  *((volatile u32*)0xE000E288)            //Interrupt 64-95 Clear Pending
#define UNPEND3  *((volatile u32*)0xE000E28C)            //Interrupt 96-127 Clear Pending
#define UNPEND4  *((volatile u32*)0xE000E290)            //Interrupt 128-138 Clear Pending
#define ACTIVE0  *((volatile u32*)0xE000E300)            //Interrupt 0-31 Active Bit
#define ACTIVE1  *((volatile u32*)0xE000E304)            //Interrupt 32-63 Active Bit
#define ACTIVE2  *((volatile u32*)0xE000E308)            //Interrupt 64-95 Active Bit
#define ACTIVE3  *((volatile u32*)0xE000E30C)            //Interrupt 96-127 Active Bit
#define ACTIVE4  *((volatile u32*)0xE000E310)            //Interrupt 128-138 Active
#define PRI0     *((volatile u32*)0xE000E400)            //Interrupt 0-3 Priority
#define PRI1     *((volatile u32*)0xE000E404)            //Interrupt 4-7 Priority
#define PRI2     *((volatile u32*)0xE000E408)            //Interrupt 8-11 Priority
#define PRI3     *((volatile u32*)0xE000E40C)            //Interrupt 12-15 Priority
#define PRI4     *((volatile u32*)0xE000E410)            //Interrupt 16-19 Priority
#define PRI5     *((volatile u32*)0xE000E414)            //Interrupt 20-23 Priority
#define PRI6     *((volatile u32*)0xE000E418)            //Interrupt 24-27 Priority
#define PRI7     *((volatile u32*)0xE000E41C)            //Interrupt 28-31 Priority
#define PRI8     *((volatile u32*)0xE000E420)            //Interrupt 32-35 Priority
#define PRI9     *((volatile u32*)0xE000E424)            //Interrupt 36-39 Priority
#define PRI10    *((volatile u32*)0xE000E428)            //Interrupt 40-43 Priority
#define PRI11    *((volatile u32*)0xE000E42C)            //Interrupt 44-47 Priority
#define PRI12    *((volatile u32*)0xE000E430)            //Interrupt 48-51 Priority
#define PRI13    *((volatile u32*)0xE000E434)            //Interrupt 52-55 Priority
#define PRI14    *((volatile u32*)0xE000E438)            //Interrupt 56-59 Priority
#define PRI15    *((volatile u32*)0xE000E43C)            //Interrupt 60-63 Priority
#define PRI16    *((volatile u32*)0xE000E440)            //Interrupt 64-67 Priority
#define PRI17    *((volatile u32*)0xE000E444)            //Interrupt 68-71 Priority
#define PRI18    *((volatile u32*)0xE000E448)            //Interrupt 72-75 Priority
#define PRI19    *((volatile u32*)0xE000E44C)            //Interrupt 76-79 Priority
#define PRI20    *((volatile u32*)0xE000E450)            //Interrupt 80-83 Priority
#define PRI21    *((volatile u32*)0xE000E454)            //Interrupt 84-87 Priority
#define PRI22    *((volatile u32*)0xE000E458)            //Interrupt 88-91 Priority
#define PRI23    *((volatile u32*)0xE000E45C)            //Interrupt 92-95 Priority
#define PRI24    *((volatile u32*)0xE000E460)            //Interrupt 96-99 Priority
#define PRI25    *((volatile u32*)0xE000E464)            //Interrupt 100-103 Priority
#define PRI26    *((volatile u32*)0xE000E468)            //Interrupt 104-107 Priority
#define PRI27    *((volatile u32*)0xE000E46C)            //Interrupt 108-111 Priority
#define PRI28    *((volatile u32*)0xE000E470)            //Interrupt 112-115 Priority
#define PRI29    *((volatile u32*)0xE000E474)            //Interrupt 116-119 Priority
#define PRI30    *((volatile u32*)0xE000E478)            //Interrupt 120-123 Priority
#define PRI31    *((volatile u32*)0xE000E47C)            //Interrupt 124-127 Priority
#define PRI32    *((volatile u32*)0xE000E480)            //Interrupt 128-131 Priority
#define PRI33    *((volatile u32*)0xE000E484)            //Interrupt 132-135 Priority
#define PRI34    *((volatile u32*)0xE000E488)            //Interrupt 136-138 Priority
#define SWTRIG   *((volatile u32*)0xE000EF00)            //Software Trigger Interrupt


#endif /* NVIC_REG_H_ */
