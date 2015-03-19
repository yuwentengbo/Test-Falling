#include "led.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//Mini STM32开发板
//LED驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2010/5/27
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 正点原子 2009-2019
//All rights reserved											  
////////////////////////////////////////////////////////////////////////////////// 	   

//初始化PA8和PD2为输出口.并使能这两个口的时钟		    
//LED IO初始化
void LED_Init(void)
{
	RCC->APB2ENR|=1<<2;    //使能PORTA时钟	   	 
	   	 
	GPIOA->CRH&=0XFFFFFFF0; 
	GPIOA->CRH|=0X00000003;//PA8 推挽输出   	 
	GPIOA->ODR|=1<<8;      //PA8输出高
	
	GPIOA->CRL&=0X00FFFFFF; 
	GPIOA->CRL|=0X33000000;//PA7.6 推挽输出   	 
	GPIOA->ODR|=1<<7;      //PA7.6输出高
	GPIOA->ODR|=1<<6;      //PA7.6输出高
	
	LED = 0;
	Sound = 0;              //蜂鸣器
}






