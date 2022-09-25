/*
 * @Author       : wang chao
 * @Date         : 2022-09-23 15:53:34
 * @LastEditors  : wang chao
 * @LastEditTime : 2022-09-26 07:42:20
 * @FilePath     : main.c
 * @Description  : 
 * Copyright 2022 BingShan, All Rights Reserved. 
 */

#include "main.h"

/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
int main(void)
{
    ulog_init();
    ulog_info("This is a stm32f40xx demo project.");
    /* Infinite loop */
    while (1)
    {
    }
}
