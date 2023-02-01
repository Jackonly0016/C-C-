/*************************************************************************
	> File Name: 2.reference.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 11 Sep 2022 09:18:12 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int &test(int &b) {
    b = 444;
    return b;
}

int main(void) {
    int a = 333;
    
    //3.函数引用
    test(a) = 555;
    cout << a << endl;

    return 0;
}
