/*-------------------------------------------------------------------------
REG5101.H

Header file for AtmelWM T8xC5101
  
Copyright (c) 1988-2001 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------*/

sfr  SP      =   0x81;
sfr  DPL     =   0x82;
sfr  DPH     =   0x83;

sfr  PCON    =   0x87;			 

sfr  TCON    =   0x88;             

sbit  TF1    =   TCON^7;
sbit  TR1    =   TCON^6;
sbit  TF0    =   TCON^5;
sbit  TR0    =   TCON^4;
sbit  IE1_   =   TCON^3;
sbit  IT1    =   TCON^2;
sbit  IE0_   =   TCON^1;
sbit  IT0    =   TCON^0;

sfr  TMOD    =   0x89;			 

sfr  TL0     =   0x8A;			 

sfr  TL1     =   0x8B;			 

sfr  TH0     =   0x8C;			 

sfr  TH1     =   0x8D;		

sfr  AUXR   =   0x8E; 			 

sfr  CKCON      =   0x8F;			 


sfr  P1      =   0x90;			 

sbit  P1_7    =   P1^7;
sbit  P1_6    =   P1^6;
sbit  P1_5    =   P1^5;
sbit  P1_4    =   P1^4;
sbit  P1_3    =   P1^3;
sbit  P1_2    =   P1^2;
sbit  P1_1    =   P1^1;
sbit  P1_0    =   P1^0;

sbit  CEX4    =   P1^7;
sbit  CEX3    =   P1^6;
sbit  CEX2    =   P1^5;
sbit  CEX1    =   P1^4;
sbit  CEX0    =   P1^3;
sbit  ECI     =   P1^2;
sbit  T2EX    =   P1^1;
sbit  T2      =   P1^0;

sfr  SCON    =   0x98;			 

sbit  SM0    =   SCON^7;
sbit  FE     =   SCON^7;
sbit  SM1    =   SCON^6;
sbit  SM2    =   SCON^5;
sbit  REN    =   SCON^4;
sbit  TB8    =   SCON^3;
sbit  RB8    =   SCON^2;
sbit  TI     =   SCON^1;
sbit  RI     =   SCON^0;

sfr  SBUF    =   0x99;			 

sfr  AUXR1  =   0xA2;              

sfr  IE     =   0xA8;			     
sfr  IE0    =   0xA8;

sbit  EA     =   IE^7;
sbit  EC     =   IE^6;
sbit  ET2    =   IE^5;
sbit  ES     =   IE^4;
sbit  ET1    =   IE^3;
sbit  EX1    =   IE^2;
sbit  ET0    =   IE^1;
sbit  EX0    =   IE^0;

sfr  SADDR   =   0xA9;			 

sfr  P3      =   0xB0;			 

sbit  P3_7    =   P3^7;
sbit  P3_6    =   P3^6;
sbit  P3_5    =   P3^5;
sbit  P3_4    =   P3^4;
sbit  P3_3    =   P3^3;
sbit  P3_2    =   P3^2;
sbit  P3_1    =   P3^1;
sbit  P3_0    =   P3^0;

sbit  RD      =   P3^7;
sbit  WR      =   P3^6;
sbit  T1      =   P3^5;
sbit  T0      =   P3^4;
sbit  INT1    =   P3^3;
sbit  INT0    =   P3^2;
sbit  TXD     =   P3^1;
sbit  RXD     =   P3^0;

sfr  IPH    =   0xB7;			     
sfr  IPH0    =   0xB7;

sfr  IPL    =   0xB8;			     
sfr  IPL0    =   0xB8;	

sbit  IPLC     =   IPL^6;
sbit  IPLT2    =   IPL^5;
sbit  IPLS     =   IPL^4;
sbit  IPLT1    =   IPL^3;
sbit  IPLX1    =   IPL^2;
sbit  IPLT0    =   IPL^1;
sbit  IPLX0    =   IPL^0;

sfr  SADEN   =   0xB9;

sfr  P4      =   0xC0;			 

sbit  P4_1    =   P4^1;
sbit  P4_0    =   P4^0;

sfr  T2CON   =   0xC8;             

sbit  TF2    =   T2CON^7;
sbit  EXF2   =   T2CON^6;
sbit  RCLK   =   T2CON^5;
sbit  TCLK   =   T2CON^4;
sbit  EXEN2  =   T2CON^3;
sbit  TR2    =   T2CON^2;
sbit  CT2    =   T2CON^1;
sbit  CPRL2  =   T2CON^0;

sfr  T2MOD   =   0xC9;			 

sfr  RCAP2L  =   0xCA;			 
sfr  RCAP2H  =   0xCB;			 
sfr  TL2     =   0xCC;			 
sfr  TH2     =   0xCD;			 

sfr  PSW     =   0xD0;			 
sbit  CY     =   PSW^7;
sbit  AC     =   PSW^6;
sbit  F0     =   PSW^5;
sbit  RS1    =   PSW^4;
sbit  RS0    =   PSW^3;
sbit  OV     =   PSW^2;
sbit  UD     =   PSW^1;
sbit  P      =   PSW^0;

sfr  A       =   0xE0;			 
sfr  ACC     =   0xE0;			 

sfr  B       =   0xF0;			 


