#ifndef __REG_N79E85X_H__
#define __REG_N79E85X_H__

#include <compiler.h>

SFR(P0,         0x80);
SFR(SP,         0x81);
SFR(DPL,        0x82);
SFR(DPH,        0x83);
SFR(PCON,       0x87);

SFR(TCON,       0x88);
SFR(TMOD,       0x89);
SFR(TL0,        0x8A);
SFR(TL1,        0x8B);
SFR(TH0,        0x8C);
SFR(TH1,        0x8D);
SFR(CKCON,      0x8E);

SFR(P1,         0x90);
SFR(CAPCON0,    0x92);
SFR(CAPCON1,    0x93);
SFR(CAPCON2,    0x94);
SFR(DIVM,       0x95);
SFR(P3M1,       0x96);
SFR(P3M2,       0x97);

SFR(SCON,       0x98);
SFR(SBUF,       0x99);
SFR(SHBDA,      0x9C); //TA protect
SFR(CHPCON,     0x9F); //TA protect

SFR(P2,         0xA0);
SFR(AUXR1,      0xA2);
SFR(PMCR,       0xA3); //TA protect
SFR(ISPTRG,     0xA4); //TA protect
SFR(ISPAL,      0xA6);
SFR(ISPAH,      0xA7);

SFR(IE,         0xA8);
SFR(SADDR,      0xA9);
SFR(WDCON1,     0xAB); //TA protect
SFR(ISPFD,      0xAE);
SFR(ISPCN,      0xAF);

SFR(P3,         0xB0);
SFR(P0M1,       0xB1);
SFR(P0M2,       0xB2);
SFR(P1M1,       0xB3);
SFR(P1M2,       0xB4);
SFR(P2M1,       0xB5);
SFR(P2M2,       0xB6);
SFR(IPH,        0xB7);

SFR(IP,         0xB8);
SFR(SADEN,      0xB9);
SFR(I2DAT,      0xBC);
SFR(I2STA,      0xBD);
SFR(I2CLK,      0xBE);
SFR(I2TOC,      0xBF);

SFR(I2CON,      0xC0);
SFR(I2ADDR,     0xC1);
SFR(TA,         0xC7);

SFR(T2CON,      0xC8);
SFR(T2MOD,      0xC9);
SFR(RCOMP2L,    0xCA);
SFR(RCOMP2H,    0xCB);
SFR(TL2,        0xCC);
SFR(TH2,        0xCD);

SFR(PSW,        0xD0);
SFR(PWMPH,      0xD1);
SFR(PWM0H,      0xD2);
SFR(PWM1H,      0xD3);
SFR(PWM2H,      0xD5);
SFR(PWM3H,      0xD6);
SFR(PWMCON2,    0xD7);

SFR(WDCON0,     0xD8); //TA protect
SFR(PWMPL,      0xD9);
SFR(PWM0L,      0xDA);
SFR(PWM1L,      0xDB);
SFR(PWMCON0,    0xDC);
SFR(PWM2L,      0xDD);
SFR(PWM3L,      0xDE);
SFR(PWMCON1,    0xDF);

SFR(ACC,        0xE0);
SFR(ADCCON1,    0xE1);
SFR(ADCH,       0xE2);
SFR(C0L,        0xE4);
SFR(C0H,        0xE5);
SFR(C1L,        0xE6);
SFR(C1H,        0xE7);

SFR(EIE,        0xE8);
SFR(KBIE,       0xE9);
SFR(KBIF,       0xEA);
SFR(KBLS0,      0xEB);
SFR(KBLS1,      0xEC);
SFR(C2L,        0xED);
SFR(C2H,        0xEE);

SFR(B,          0xF0);
SFR(SPCR,       0xF3);
SFR(SPSR,       0xF4);
SFR(SPDR,       0xF5);
SFR(P0DIDS,     0xF6);
SFR(E0xB8H,       0xF7);

SFR(ADCCON0,    0xF8);
SFR(EIP,        0xFF);

/*  BIT Registers  */
/*  PSW */
SBIT(CY,        0xD0, 7);
SBIT(AC,        0xD0, 6);
SBIT(F0,        0xD0, 5);
SBIT(RS1,       0xD0, 4);
SBIT(RS0,       0xD0, 3);
SBIT(OV,        0xD0, 2);
SBIT(F1,        0xD0, 1);
SBIT(P,         0xD0, 0);

/*  ADCCON0  */
SBIT(ADC1,      0xF8, 7);
SBIT(ADC0,      0xF8, 6);
SBIT(ADCEX,     0xF8, 5);
SBIT(ADCI,      0xF8, 4);
SBIT(ADCS,      0xF8, 3);
SBIT(AADR2,     0xF8, 2);
SBIT(AADR1,     0xF8, 1);
SBIT(AADR0,     0xF8, 0);

/*  TCON  */
SBIT(TF1,       0x88, 7);
SBIT(TR1,       0x88, 6);
SBIT(TF0,       0x88, 5);
SBIT(TR0,       0x88, 4);
SBIT(IE1,       0x88, 3);
SBIT(IT1,       0x88, 2);
SBIT(IE0,       0x88, 1);
SBIT(IT0,       0x88, 0);

/*  T2CON  */
SBIT(TF2,       0xC8, 7);
SBIT(TR2,       0xC8, 2);
SBIT(CP_RL2,    0xC8, 0);

/*  IE  */
SBIT(EA,        0xA8, 7);
SBIT(EADC,      0xA8, 6);
SBIT(EBO,       0xA8, 5);
SBIT(ES,        0xA8, 4);
SBIT(ET1,       0xA8, 3);
SBIT(EX1,       0xA8, 2);
SBIT(ET0,       0xA8, 1);
SBIT(EX0,       0xA8, 0);

/*  0xB8  */
SBIT(PCAP,      0xB8, 7);
SBIT(PADC,      0xB8, 6);
SBIT(PBOD,      0xB8, 5);
SBIT(PS,        0xB8, 4);
SBIT(PT1,       0xB8, 3);
SBIT(PX1,       0xB8, 2);
SBIT(PT0,       0xB8, 1);
SBIT(PX0,       0xB8, 0);

/*  0x98  */
SBIT(SM0,       0x98, 7);
SBIT(FE,        0x98, 7);
SBIT(SM1,       0x98, 6);
SBIT(SM2,       0x98, 5);
SBIT(REN,       0x98, 4);
SBIT(TB8,       0x98, 3);
SBIT(RB8,       0x98, 2);
SBIT(TI,        0x98, 1);
SBIT(RI,        0x98, 0);

/*  WDCON0  */
SBIT(WDTEN,     0xD8, 7);
SBIT(WDCLR,     0xD8, 6);
SBIT(WDTF,      0xD8, 5);
SBIT(WIDPD,     0xD8, 4);
SBIT(WDTRF,     0xD8, 3);
SBIT(WPS2,      0xD8, 2);
SBIT(WPS1,      0xD8, 1);
SBIT(WPS0,      0xD8, 0);

/*  EIE  */
SBIT(ET2,       0xE8, 7);
SBIT(ESPI,      0xE8, 6);
SBIT(EPWM,      0xE8, 5);
SBIT(EWDI,      0xE8, 4);
SBIT(ECPTF,     0xE8, 2);
SBIT(EKB,       0xE8, 1);
SBIT(EI2C,      0xE8, 0);

/*  I2CON  */
SBIT(I2CEN,     0xC0, 6);
SBIT(STA,       0xC0, 5);
SBIT(STO,       0xC0, 4);
SBIT(SI,        0xC0, 3);
SBIT(AA,        0xC0, 2);

SBIT(P00,       0x80, 0);
SBIT(P01,       0x80, 1);
SBIT(P02,       0x80, 2);
SBIT(P03,       0x80, 3);
SBIT(P04,       0x80, 4);
SBIT(P05,       0x80, 5);
SBIT(P06,       0x80, 6);
SBIT(P07,       0x80, 7);

/*  P1  */
SBIT(PWM2,      0x90, 7);
SBIT(PWM1,      0x90, 6);
SBIT(RST,       0x90, 5);
SBIT(INT1,      0x90, 4);
SBIT(INT0,      0x90, 3);
SBIT(SDA,       0x90, 3);
SBIT(T0,        0x90, 2);
SBIT(SCL,       0x90, 2);
SBIT(RXD,       0x90, 1);
SBIT(TXD,       0x90, 0);

SBIT(P10,       0x90, 0);
SBIT(P11,       0x90, 1);
SBIT(P12,       0x90, 2);
SBIT(P13,       0x90, 3);
SBIT(P14,       0x90, 4);
SBIT(P15,       0x90, 5);
SBIT(P16,       0x90, 6);
SBIT(P17,       0x90, 7);

SBIT(P20,       0xA0, 0);
SBIT(P21,       0xA0, 1);
SBIT(P22,       0xA0, 2);
SBIT(P23,       0xA0, 3);
SBIT(P24,       0xA0, 4);
SBIT(P25,       0xA0, 5);
SBIT(P26,       0xA0, 6);
SBIT(P27,       0xA0, 7);
SBIT(TXD2,      0xA0, 6);
SBIT(RXD2,      0xA0, 7);

SBIT(P30,       0xB0, 0);
SBIT(CLKOUT,    0xB0, 0);
SBIT(P31,       0xB0, 1);

#define IE0_VECTOR      0       /* 0x03 external interrupt 0 */
#define TF0_VECTOR      1       /* 0x0b timer 0 */
#define IE1_VECTOR      2       /* 0x13 external interrupt 1 */
#define TF1_VECTOR      3       /* 0x1b timer 1 */
#define SI0_VECTOR      4       /* 0x23 serial port 0 */
#define TF2_VECTOR      5       /* 0x2b timer 2 */
#define I2C_VECTOR      6       /* 0x33 i2c interrupt */
#define KBI_VECTOR      7       /* 0x3b keyboard interrupt */
#define BOD_VECTOR      8       /* 0x43 brown-out detect interrupt */
#define SPI_VECTOR      9       /* 0x4b spi interrupt */
#define WDT_VECTOR      10      /* 0x53 watchdog timer */
#define ADC_VECTOR      11      /* 0x5b adc interrupt */
#define CPT_VECTOR      12      /* 0x63 capture interrupt */
#define PWM_VECTOR      14      /* 0x73 PWM interrupt */

#endif
