/*************************************************************************
	> File Name: 0.reference.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 02 Sep 2022 09:55:57 PM CST
 ************************************************************************/

#include <iostream>

int test1()
{
    int a = 333;
    int &b = a;

    return b;
}

int test2()
{
    int a = 333;
    int *p = &a;

    return *p;
}

int main(void)
{
    std::cout << "------0.指针------" << std::endl;
    int a = 333;
    int *p = &a;
    *p = 444;
    std::cout << *p << std::endl;

    std::cout << "------0.基本变量引用------" << std::endl;
    int b = 555;
    int &refer_p = b;
    refer_p = 666;

    std::cout << b << std::endl;
    std::cout << refer_p << std::endl;

    return 0;
}


