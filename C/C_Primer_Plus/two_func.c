/*
 * @Description: two_func.c
 * @version: 1.0
 * @Author: Wrg
 * @Date: 2022-06-20 18:49:19
 * @LastEditors: Wrg
 * @LastEditTime: 2022-06-20 18:51:52
 */
#include<stdio.h>

void butler(void); // 声明一个函数

int main(void)
{
    butler(); // 调用函数
    printf("Butler is here.\n"); // 输出字符串
    return 0; // 返回0
}

// 定义一个函数
void butler(void)
{
    printf("Butler is here.\n"); // 输出字符串
}