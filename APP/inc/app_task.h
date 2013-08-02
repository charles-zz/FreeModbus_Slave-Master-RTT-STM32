/*********************************************************************************************************
//                             NCLUDE FILES
*********************************************************************************************************/
#ifndef APP_TASK_H
#define APP_TASK_H

#include <stdlib.h>
#include <stdio.h>
#include <rthw.h>	
#include <rtthread.h>
#include <stm32f10x_conf.h>
#include "bsp.h"
#include "delay_conf.h"
#include "cpuusage.h"

/*******************************************************************************************************/
//                           DEFINES                                                                   
/*******************************************************************************************************/


#define success                  0
#define fail                     1

#define false                    0
#define true                     1







extern void cpu_usage_get(rt_uint8_t *major, rt_uint8_t *minor);
extern void cpu_usage_init(void);

 

void rtthread_startup(void);


#endif
