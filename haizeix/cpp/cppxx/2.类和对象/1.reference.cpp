/*************************************************************************
	> File Name: 1.reference.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 11 Sep 2022 09:16:55 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main(void) {
    int a[10];
    //2.数组引用
    int (&b)[10] = a;

    cout << a << endl;
    cout << b << endl;


    return 0;
}
