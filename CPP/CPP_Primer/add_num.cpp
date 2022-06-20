/*
 * @Description: 
 * @version: 
 * @Author: Wrg
 * @Date: 2022-06-20 10:59:17
 * @LastEditors: Wrg
 * @LastEditTime: 2022-06-20 17:18:03
 */

#include <iostream> // cin, cout

int main()
{
    int a = 0, b = 0; // 声明两个变量
    std::cout << "Please input two numbers: "; // 输入两个数字
    std::cin >> a >> b; // 输入两个数字
    std::cout << "The sum of " << a << " and " << b << " is " << a + b << std::endl; // 输出两个数字的和
    return 0; // 返回0
}