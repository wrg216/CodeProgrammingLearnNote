/*
 * @Description: test.c 
 * @version: 1.0
 * @Author: Wrg
 * @Date: 2022-06-20 16:51:14
 * @LastEditors: Wrg
 * @LastEditTime: 2022-06-20 18:53:25
 */

#include <stdio.h>

int main(void)
{
    int dogs; // 声明变量dogs
    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("You have %d dogs.\n", dogs);
    return 0;
}