/*
 * @Description: C Primer Plus第二章第5节第一个程序
 * @version: 1.0
 * @Author: Wrg
 * @Date: 2022-06-20 18:41:38
 * @LastEditors: Wrg
 * @LastEditTime: 2022-06-20 18:46:37
 */
#include<stdio.h>

int main()
{
    int feet, fathoms;

    fathoms = 2;
    feet = fathoms * 6;

    printf("There are %d feet in %d fathoms.\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}