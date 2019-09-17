#ifndef GPIO_Reg_H
#define GPIO_Reg_H
/*Base of GPIO Ports Registers Advanced High-performance Bus */
#define GPIO_PortA_Base   *((volatile u8*)0x40058000) 
#define GPIO_PortB_Base   *((volatile u8*)0x40059000) 
#define GPIO_PortC_Base   *((volatile u8*)0x4005A000) 
#define GPIO_PortD_Base   *((volatile u8*)0x4005B000) 
#define GPIO_PortE_Base   *((volatile u8*)0x4005C000) 
#define GPIO_PortF_Base   *((volatile u8*)0x4005D000) 
#define GPIOHBCTL         *((volatile u8*)0x400FE06C)

/***********************/
/*GPIO_Data Mask for each pin*/
#define GPIODATA_PORTA_Hole  *((volatile u32*)(0x400043FC))
#define GPIODATA_PORTB_Hole  *((volatile u32*)(0x400053FC))
#define GPIODATA_PORTC_Hole  *((volatile u32*)(0x400063FC))
#define GPIODATA_PORTD_Hole  *((volatile u32*)(0x400073FC))
#define GPIODATA_PORTE_Hole  *((volatile u32*)(0x400243FC))
#define GPIODATA_PORTF_Hole  *((volatile u32*)(0x400253FC))

#define GPIODATA_PORTA_Maske_Pin0 *((volatile u32*)(0x40004004))
#define GPIODATA_PORTB_Maske_Pin0 *((volatile u32*)(0x40005004))
#define GPIODATA_PORTC_Maske_Pin0 *((volatile u32*)(0x40006004))
#define GPIODATA_PORTD_Maske_Pin0 *((volatile u32*)(0x40007004))
#define GPIODATA_PORTE_Maske_Pin0 *((volatile u32*)(0x40024004))
#define GPIODATA_PORTF_Maske_Pin0 *((volatile u32*)(0x40025004))

#define GPIODATA_PORTA_Maske_Pin1 *((volatile u32*)(0x40004008))
#define GPIODATA_PORTB_Maske_Pin1 *((volatile u32*)(0x40005008))
#define GPIODATA_PORTC_Maske_Pin1 *((volatile u32*)(0x40006008))
#define GPIODATA_PORTD_Maske_Pin1 *((volatile u32*)(0x40007008))
#define GPIODATA_PORTE_Maske_Pin1 *((volatile u32*)(0x40024008))
#define GPIODATA_PORTF_Maske_Pin1 *((volatile u32*)(0x40025008))


#define GPIODATA_PORTA_Maske_Pin2 *((volatile u32*)(0x40004010))
#define GPIODATA_PORTB_Maske_Pin2 *((volatile u32*)(0x40005010))
#define GPIODATA_PORTC_Maske_Pin2 *((volatile u32*)(0x40006010))
#define GPIODATA_PORTD_Maske_Pin2 *((volatile u32*)(0x40007010))
#define GPIODATA_PORTE_Maske_Pin2 *((volatile u32*)(0x40024010))
#define GPIODATA_PORTF_Maske_Pin2 *((volatile u32*)(0x40025010))


#define GPIODATA_PORTA_Maske_Pin3 *((volatile u32*)(0x40004020))
#define GPIODATA_PORTB_Maske_Pin3 *((volatile u32*)(0x40005020))
#define GPIODATA_PORTC_Maske_Pin3 *((volatile u32*)(0x40006020))
#define GPIODATA_PORTD_Maske_Pin3 *((volatile u32*)(0x40007020))
#define GPIODATA_PORTE_Maske_Pin3 *((volatile u32*)(0x40024020))
#define GPIODATA_PORTF_Maske_Pin3 *((volatile u32*)(0x40025020))


#define GPIODATA_PORTA_Maske_Pin4 *((volatile u32*)(0x40004040))
#define GPIODATA_PORTB_Maske_Pin4 *((volatile u32*)(0x40005040))
#define GPIODATA_PORTC_Maske_Pin4 *((volatile u32*)(0x40006040))
#define GPIODATA_PORTD_Maske_Pin4 *((volatile u32*)(0x40007040))
#define GPIODATA_PORTE_Maske_Pin4 *((volatile u32*)(0x40024040))
#define GPIODATA_PORTF_Maske_Pin4 *((volatile u32*)(0x40025040))


#define GPIODATA_PORTA_Maske_Pin5 *((volatile u32*)(0x40004080))
#define GPIODATA_PORTB_Maske_Pin5 *((volatile u32*)(0x40005080))
#define GPIODATA_PORTC_Maske_Pin5 *((volatile u32*)(0x40006080))
#define GPIODATA_PORTD_Maske_Pin5 *((volatile u32*)(0x40007080))
#define GPIODATA_PORTE_Maske_Pin5 *((volatile u32*)(0x40024080))
#define GPIODATA_PORTF_Maske_Pin5 *((volatile u32*)(0x40025080))


#define GPIODATA_PORTA_Maske_Pin6 *((volatile u32*)(0x40004100))
#define GPIODATA_PORTB_Maske_Pin6 *((volatile u32*)(0x40005100))
#define GPIODATA_PORTC_Maske_Pin6 *((volatile u32*)(0x40006100))
#define GPIODATA_PORTD_Maske_Pin6 *((volatile u32*)(0x40007100))
#define GPIODATA_PORTE_Maske_Pin6 *((volatile u32*)(0x40024100))
#define GPIODATA_PORTF_Maske_Pin6 *((volatile u32*)(0x40025100))


#define GPIODATA_PORTA_Maske_Pin7 *((volatile u32*)(0x40004200))
#define GPIODATA_PORTB_Maske_Pin7 *((volatile u32*)(0x40005200))
#define GPIODATA_PORTC_Maske_Pin7 *((volatile u32*)(0x40006200))
#define GPIODATA_PORTD_Maske_Pin7 *((volatile u32*)(0x40007200))
#define GPIODATA_PORTE_Maske_Pin7 *((volatile u32*)(0x40024200))
#define GPIODATA_PORTF_Maske_Pin7 *((volatile u32*)(0x40025200))


/***********************/

/*The offset of each register from the base */
#define GPIODATA	   0x00000000 //GPIO Data
#define GPIODIR        0x00000400 //GPIO Direction
#define GPIOIS         0x00000404 //GPIO Interrupt Sense
#define GPIOIBE        0x00000408 //GPIO Interrupt Both Edges
#define GPIOIEV        0x0000040C //GPIO Interrupt Event
#define GPIOIM         0x00000410 //GPIO Interrupt Mask
#define GPIORIS        0x00000414 //GPIO Raw Interrupt Status
#define GPIOMIS        0x00000418 //GPIO Masked Interrupt Status
#define GPIOICR        0x0000041C //GPIO Interrupt Clear
#define GPIOAFSEL      0x00000420 //GPIO Alternate Function Select
#define GPIODR2R       0x00000500 //GPIO 2-mA Drive Select
#define GPIODR4R       0x00000504 //GPIO 4-mA Drive Select
#define GPIODR8R       0x00000508 //GPIO 8-mA Drive Select
#define GPIOODR        0x0000050C //GPIO Open Drain Select
#define GPIOPUR        0x00000510 //GPIO Pull-Up Select
#define GPIOPDR        0x00000514 //GPIO Pull-Down Select
#define GPIOSLR        0x00000518 //GPIO Slew Rate Control Select
#define GPIODEN        0x0000051C //GPIO Digital Enable
#define GPIOLOCK       0x00000520 //GPIO Lock
#define GPIOCR         0x00000524 //GPIO Commit
#define GPIOAMSEL      0x00000528 //GPIO Analog Mode Select
#define GPIOPCTL       0x0000052C //GPIO Port Control
#define GPIOADCCTL     0x00000530 //GPIO ADC Control
#define GPIODMACTL     0x00000534 //GPIO DMA Control
#define GPIOPeriphID4  0x00000FD0 //GPIO Peripheral Identification 4
#define GPIOPeriphID5  0x00000FD4 //GPIO Peripheral Identification 5
#define GPIOPeriphID6  0x00000FD8 //GPIO Peripheral Identification 6
#define GPIOPeriphID7  0x00000FDC //GPIO Peripheral Identification 7
#define GPIOPeriphID0  0x00000FE0 //GPIO Peripheral Identification 0
#define GPIOPeriphID1  0x00000FE4 //GPIO Peripheral Identification 1
#define GPIOPeriphID2  0x00000FE8 //GPIO Peripheral Identification 2
#define GPIOPeriphID3  0x00000FEC //GPIO Peripheral Identification 3
#define GPIOPCellID0	0x00000FF0 //GPIO PrimeCell Identification 0
#define GPIOPCellID1   0x00000FF4 //GPIO PrimeCell Identification 1
#define GPIOPCellID2   0x00000FF8 //GPIO PrimeCell Identification 2
#define GPIOPCellID3   0x00000FFC //GPIO PrimeCell Identification 3

/***********************/
/*Needed Control Registers*/
#define RCGCGPIO *((volatile u8*)0x400FE608)		//enable clock for the GPIO
/***********************/
/*Function registers Base+Offset for PORTA*/
#define GPIODATA_PORTA	  	 *((volatile u32*)0x40004000)
#define GPIODIR_PORTA        *((volatile u32*)0x40004400)
#define GPIOIS_PORTA         *((volatile u32*)0x40004404)
#define GPIOIBE_PORTA        *((volatile u32*)0x40004408)
#define GPIOIEV_PORTA        *((volatile u32*)0x4000440C)
#define GPIOIM_PORTA         *((volatile u32*)0x40004410)
#define GPIORIS_PORTA        *((volatile u32*)0x40004414)
#define GPIOMIS_PORTA        *((volatile u32*)0x40004418)
#define GPIOICR_PORTA        *((volatile u32*)0x4000441C)
#define GPIOAFSEL_PORTA      *((volatile u32*)0x40004420)
#define GPIODR2R_PORTA       *((volatile u32*)0x40004500)
#define GPIODR4R_PORTA       *((volatile u32*)0x40004504)
#define GPIODR8R_PORTA       *((volatile u32*)0x40004508)
#define GPIOODR_PORTA        *((volatile u32*)0x4000450C)
#define GPIOPUR_PORTA        *((volatile u32*)0x40004510)
#define GPIOPDR_PORTA        *((volatile u32*)0x40004514)
#define GPIOSLR_PORTA        *((volatile u32*)0x40004518)
#define GPIODEN_PORTA        *((volatile u32*)0x4000451C)
#define GPIOLOCK_PORTA       *((volatile u32*)0x40004520)
#define GPIOCR_PORTA         *((volatile u32*)0x40004524)
#define GPIOAMSEL_PORTA      *((volatile u32*)0x40004528)
#define GPIOPCTL_PORTA       *((volatile u32*)0x4000452C)
#define GPIOADCCTL_PORTA     *((volatile u32*)0x40004530)
#define GPIODMACTL_PORTA     *((volatile u32*)0x40004534)
#define GPIOPeriphID4_PORTA  *((volatile u32*)0x40004FD0)
#define GPIOPeriphID5_PORTA  *((volatile u32*)0x40004FD4)
#define GPIOPeriphID6_PORTA  *((volatile u32*)0x40004FD8)
#define GPIOPeriphID7_PORTA  *((volatile u32*)0x40004FDC)
#define GPIOPeriphID0_PORTA  *((volatile u32*)0x40004FE0)
#define GPIOPeriphID1_PORTA  *((volatile u32*)0x40004FE4)
#define GPIOPeriphID2_PORTA  *((volatile u32*)0x40004FE8)
#define GPIOPeriphID3_PORTA  *((volatile u32*)0x40004FEC)
#define GPIOPCellID0_PORTA   *((volatile u32*)0x40004FF0)
#define GPIOPCellID1_PORTA   *((volatile u32*)0x40004FF4)
#define GPIOPCellID2_PORTA   *((volatile u32*)0x40004FF8)
#define GPIOPCellID3_PORTA   *((volatile u32*)0x40004FFC)
/***********************/
/*Function registers Base+Offset for PORTB*/
#define GPIODATA_PORTB	  	 *((volatile u32*)0x40005000)
#define GPIODIR_PORTB        *((volatile u32*)0x40005400)
#define GPIOIS_PORTB         *((volatile u32*)0x40005404)
#define GPIOIBE_PORTB        *((volatile u32*)0x40005408)
#define GPIOIEV_PORTB        *((volatile u32*)0x4000540C)
#define GPIOIM_PORTB         *((volatile u32*)0x40005410)
#define GPIORIS_PORTB        *((volatile u32*)0x40005414)
#define GPIOMIS_PORTB        *((volatile u32*)0x40005418)
#define GPIOICR_PORTB        *((volatile u32*)0x4000541C)
#define GPIOAFSEL_PORTB      *((volatile u32*)0x40005420)
#define GPIODR2R_PORTB       *((volatile u32*)0x40005500)
#define GPIODR4R_PORTB       *((volatile u32*)0x40005504)
#define GPIODR8R_PORTB       *((volatile u32*)0x40005508)
#define GPIOODR_PORTB        *((volatile u32*)0x4000550C)
#define GPIOPUR_PORTB        *((volatile u32*)0x40005510)
#define GPIOPDR_PORTB        *((volatile u32*)0x40005514)
#define GPIOSLR_PORTB        *((volatile u32*)0x40005518)
#define GPIODEN_PORTB        *((volatile u32*)0x4000551C)
#define GPIOLOCK_PORTB       *((volatile u32*)0x40005520)
#define GPIOCR_PORTB         *((volatile u32*)0x40005524)
#define GPIOAMSEL_PORTB      *((volatile u32*)0x40005528)
#define GPIOPCTL_PORTB       *((volatile u32*)0x4000552C)
#define GPIOADCCTL_PORTB     *((volatile u32*)0x40005530)
#define GPIODMACTL_PORTB     *((volatile u32*)0x40005534)
#define GPIOPeriphID4_PORTB  *((volatile u32*)0x40005FD0)
#define GPIOPeriphID5_PORTB  *((volatile u32*)0x40005FD4)
#define GPIOPeriphID6_PORTB  *((volatile u32*)0x40005FD8)
#define GPIOPeriphID7_PORTB  *((volatile u32*)0x40005FDC)
#define GPIOPeriphID0_PORTB  *((volatile u32*)0x40005FE0)
#define GPIOPeriphID1_PORTB  *((volatile u32*)0x40005FE4)
#define GPIOPeriphID2_PORTB  *((volatile u32*)0x40005FE8)
#define GPIOPeriphID3_PORTB  *((volatile u32*)0x40005FEC)
#define GPIOPCellID0_PORTB   *((volatile u32*)0x40005FF0)
#define GPIOPCellID1_PORTB   *((volatile u32*)0x40005FF4)
#define GPIOPCellID2_PORTB   *((volatile u32*)0x40005FF8)
#define GPIOPCellID3_PORTB   *((volatile u32*)0x40005FFC)
/***********************/
/*Function registers Base+Offset for PORTC*/
#define GPIODATA_PORTC	  	 *((volatile u32*)0x40006000)
#define GPIODIR_PORTC        *((volatile u32*)0x40006400)
#define GPIOIS_PORTC         *((volatile u32*)0x40006404)
#define GPIOIBE_PORTC        *((volatile u32*)0x40006408)
#define GPIOIEV_PORTC        *((volatile u32*)0x4000640C)
#define GPIOIM_PORTC         *((volatile u32*)0x40006410)
#define GPIORIS_PORTC        *((volatile u32*)0x40006414)
#define GPIOMIS_PORTC        *((volatile u32*)0x40006418)
#define GPIOICR_PORTC        *((volatile u32*)0x4000641C)
#define GPIOAFSEL_PORTC      *((volatile u32*)0x40006420)
#define GPIODR2R_PORTC       *((volatile u32*)0x40006500)
#define GPIODR4R_PORTC       *((volatile u32*)0x40006504)
#define GPIODR8R_PORTC       *((volatile u32*)0x40006508)
#define GPIOODR_PORTC        *((volatile u32*)0x4000650C)
#define GPIOPUR_PORTC        *((volatile u32*)0x40006510)
#define GPIOPDR_PORTC        *((volatile u32*)0x40006514)
#define GPIOSLR_PORTC        *((volatile u32*)0x40006518)
#define GPIODEN_PORTC        *((volatile u32*)0x4000651C)
#define GPIOLOCK_PORTC       *((volatile u32*)0x40006520)
#define GPIOCR_PORTC         *((volatile u32*)0x40006524)
#define GPIOAMSEL_PORTC      *((volatile u32*)0x40006528)
#define GPIOPCTL_PORTC       *((volatile u32*)0x4000652C)
#define GPIOADCCTL_PORTC     *((volatile u32*)0x40006530)
#define GPIODMACTL_PORTC     *((volatile u32*)0x40006534)
#define GPIOPeriphID4_PORTC  *((volatile u32*)0x40006FD0)
#define GPIOPeriphID5_PORTC  *((volatile u32*)0x40006FD4)
#define GPIOPeriphID6_PORTC  *((volatile u32*)0x40006FD8)
#define GPIOPeriphID7_PORTC  *((volatile u32*)0x40006FDC)
#define GPIOPeriphID0_PORTC  *((volatile u32*)0x40006FE0)
#define GPIOPeriphID1_PORTC  *((volatile u32*)0x40006FE4)
#define GPIOPeriphID2_PORTC  *((volatile u32*)0x40006FE8)
#define GPIOPeriphID3_PORTC  *((volatile u32*)0x40006FEC)
#define GPIOPCellID0_PORTC   *((volatile u32*)0x40006FF0)
#define GPIOPCellID1_PORTC   *((volatile u32*)0x40006FF4)
#define GPIOPCellID2_PORTC   *((volatile u32*)0x40006FF8)
#define GPIOPCellID3_PORTC   *((volatile u32*)0x40006FFC)
/***********************/
/*Function registers Base+Offset for PORTD*/
#define GPIODATA_PORTD	  	 *((volatile u32*)0x40007000)
#define GPIODIR_PORTD        *((volatile u32*)0x40007400)
#define GPIOIS_PORTD         *((volatile u32*)0x40007404)
#define GPIOIBE_PORTD        *((volatile u32*)0x40007408)
#define GPIOIEV_PORTD        *((volatile u32*)0x4000740C)
#define GPIOIM_PORTD         *((volatile u32*)0x40007410)
#define GPIORIS_PORTD        *((volatile u32*)0x40007414)
#define GPIOMIS_PORTD        *((volatile u32*)0x40007418)
#define GPIOICR_PORTD        *((volatile u32*)0x4000741C)
#define GPIOAFSEL_PORTD      *((volatile u32*)0x40007420)
#define GPIODR2R_PORTD       *((volatile u32*)0x40007500)
#define GPIODR4R_PORTD       *((volatile u32*)0x40007504)
#define GPIODR8R_PORTD       *((volatile u32*)0x40007508)
#define GPIOODR_PORTD        *((volatile u32*)0x4000750C)
#define GPIOPUR_PORTD        *((volatile u32*)0x40007510)
#define GPIOPDR_PORTD        *((volatile u32*)0x40007514)
#define GPIOSLR_PORTD        *((volatile u32*)0x40007518)
#define GPIODEN_PORTD        *((volatile u32*)0x4000751C)
#define GPIOLOCK_PORTD       *((volatile u32*)0x40007520)
#define GPIOCR_PORTD         *((volatile u32*)0x40007524)
#define GPIOAMSEL_PORTD      *((volatile u32*)0x40007528)
#define GPIOPCTL_PORTD       *((volatile u32*)0x4000752C)
#define GPIOADCCTL_PORTD     *((volatile u32*)0x40007530)
#define GPIODMACTL_PORTD     *((volatile u32*)0x40007534)
#define GPIOPeriphID4_PORTD  *((volatile u32*)0x40007FD0)
#define GPIOPeriphID5_PORTD  *((volatile u32*)0x40007FD4)
#define GPIOPeriphID6_PORTD  *((volatile u32*)0x40007FD8)
#define GPIOPeriphID7_PORTD  *((volatile u32*)0x40007FDC)
#define GPIOPeriphID0_PORTD  *((volatile u32*)0x40007FE0)
#define GPIOPeriphID1_PORTD  *((volatile u32*)0x40007FE4)
#define GPIOPeriphID2_PORTD  *((volatile u32*)0x40007FE8)
#define GPIOPeriphID3_PORTD  *((volatile u32*)0x40007FEC)
#define GPIOPCellID0_PORTD   *((volatile u32*)0x40007FF0)
#define GPIOPCellID1_PORTD   *((volatile u32*)0x40007FF4)
#define GPIOPCellID2_PORTD   *((volatile u32*)0x40007FF8)
#define GPIOPCellID3_PORTD   *((volatile u32*)0x40007FFC)
/***********************/
/*Function registers Base+Offset for PORTE*/
#define GPIODATA_PORTE	  	 *((volatile u32*)0x40024000)
#define GPIODIR_PORTE        *((volatile u32*)0x40024400)
#define GPIOIS_PORTE         *((volatile u32*)0x40024404)
#define GPIOIBE_PORTE        *((volatile u32*)0x40024408)
#define GPIOIEV_PORTE        *((volatile u32*)0x4002440C)
#define GPIOIM_PORTE         *((volatile u32*)0x40024410)
#define GPIORIS_PORTE        *((volatile u32*)0x40024414)
#define GPIOMIS_PORTE        *((volatile u32*)0x40024418)
#define GPIOICR_PORTE        *((volatile u32*)0x4002441C)
#define GPIOAFSEL_PORTE      *((volatile u32*)0x40024420)
#define GPIODR2R_PORTE       *((volatile u32*)0x40024500)
#define GPIODR4R_PORTE       *((volatile u32*)0x40024504)
#define GPIODR8R_PORTE       *((volatile u32*)0x40024508)
#define GPIOODR_PORTE        *((volatile u32*)0x4002450C)
#define GPIOPUR_PORTE        *((volatile u32*)0x40024510)
#define GPIOPDR_PORTE        *((volatile u32*)0x40024514)
#define GPIOSLR_PORTE        *((volatile u32*)0x40024518)
#define GPIODEN_PORTE        *((volatile u32*)0x4002451C)
#define GPIOLOCK_PORTE       *((volatile u32*)0x40024520)
#define GPIOCR_PORTE         *((volatile u32*)0x40024524)
#define GPIOAMSEL_PORTE      *((volatile u32*)0x40024528)
#define GPIOPCTL_PORTE       *((volatile u32*)0x4002452C)
#define GPIOADCCTL_PORTE     *((volatile u32*)0x40024530)
#define GPIODMACTL_PORTE     *((volatile u32*)0x40024534)
#define GPIOPeriphID4_PORTE  *((volatile u32*)0x40024FD0)
#define GPIOPeriphID5_PORTE  *((volatile u32*)0x40024FD4)
#define GPIOPeriphID6_PORTE  *((volatile u32*)0x40024FD8)
#define GPIOPeriphID7_PORTE  *((volatile u32*)0x40024FDC)
#define GPIOPeriphID0_PORTE  *((volatile u32*)0x40024FE0)
#define GPIOPeriphID1_PORTE  *((volatile u32*)0x40024FE4)
#define GPIOPeriphID2_PORTE  *((volatile u32*)0x40024FE8)
#define GPIOPeriphID3_PORTE  *((volatile u32*)0x40024FEC)
#define GPIOPCellID0_PORTE   *((volatile u32*)0x40024FF0)
#define GPIOPCellID1_PORTE   *((volatile u32*)0x40024FF4)
#define GPIOPCellID2_PORTE   *((volatile u32*)0x40024FF8)
#define GPIOPCellID3_PORTE   *((volatile u32*)0x40024FFC)
/***********************/
/*Function registers Base+Offset for PORTF*/
#define GPIODATA_PORTF	  	 *((volatile u32*)0x40025000)
#define GPIODIR_PORTF        *((volatile u32*)0x40025400)
#define GPIOIS_PORTF         *((volatile u32*)0x40025404)
#define GPIOIBE_PORTF        *((volatile u32*)0x40025408)
#define GPIOIEV_PORTF        *((volatile u32*)0x4002540C)
#define GPIOIM_PORTF         *((volatile u32*)0x40025410)
#define GPIORIS_PORTF        *((volatile u32*)0x40025414)
#define GPIOMIS_PORTF        *((volatile u32*)0x40025418)
#define GPIOICR_PORTF        *((volatile u32*)0x4002541C)
#define GPIOAFSEL_PORTF      *((volatile u32*)0x40025420)
#define GPIODR2R_PORTF       *((volatile u32*)0x40025500)
#define GPIODR4R_PORTF       *((volatile u32*)0x40025504)
#define GPIODR8R_PORTF       *((volatile u32*)0x40025508)
#define GPIOODR_PORTF        *((volatile u32*)0x4002550C)
#define GPIOPUR_PORTF        *((volatile u32*)0x40025510)
#define GPIOPDR_PORTF        *((volatile u32*)0x40025514)
#define GPIOSLR_PORTF        *((volatile u32*)0x40025518)
#define GPIODEN_PORTF        *((volatile u32*)0x4002551C)
#define GPIOLOCK_PORTF       *((volatile u32*)0x40025520)
#define GPIOCR_PORTF         *((volatile u32*)0x40025524)
#define GPIOAMSEL_PORTF      *((volatile u32*)0x40025528)
#define GPIOPCTL_PORTF       *((volatile u32*)0x4002552C)
#define GPIOADCCTL_PORTF     *((volatile u32*)0x40025530)
#define GPIODMACTL_PORTF     *((volatile u32*)0x40025534)
#define GPIOPeriphID4_PORTF  *((volatile u32*)0x40025FD0)
#define GPIOPeriphID5_PORTF  *((volatile u32*)0x40025FD4)
#define GPIOPeriphID6_PORTF  *((volatile u32*)0x40025FD8)
#define GPIOPeriphID7_PORTF  *((volatile u32*)0x40025FDC)
#define GPIOPeriphID0_PORTF  *((volatile u32*)0x40025FE0)
#define GPIOPeriphID1_PORTF  *((volatile u32*)0x40025FE4)
#define GPIOPeriphID2_PORTF  *((volatile u32*)0x40025FE8)
#define GPIOPeriphID3_PORTF  *((volatile u32*)0x40025FEC)
#define GPIOPCellID0_PORTF   *((volatile u32*)0x40025FF0)
#define GPIOPCellID1_PORTF   *((volatile u32*)0x40025FF4)
#define GPIOPCellID2_PORTF   *((volatile u32*)0x40025FF8)
#define GPIOPCellID3_PORTF   *((volatile u32*)0x40025FFC)
/***********************/
#define HWREG(x)           (*((volatile uint32_t *)(x)))
#endif
