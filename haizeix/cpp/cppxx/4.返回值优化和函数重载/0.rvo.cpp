/*************************************************************************
	> File Name: 0.rvo.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 12 Sep 2022 02:44:06 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
    int x;
public:
    A() {
        cout << this << " default constructor" << endl;
    }
    A(int x): x(x) {
        cout << this << " param constructor" << endl;
    }
    A(const A &a): x(a.x) {
        cout << this << " copy constructor" << endl;
    }
    ~A() {
        cout << this << " destructor" << endl;
    }
};

A func() {
    A tmp(100);
    cout << "tmp:" << &tmp << endl;
    return tmp;
}

int main(void) {
    //A a(10); // 有参构造
    //A b(a);  // 拷贝构造
    int b = 444;
    A a = func();
    int c = 555;
    cout << "  a:" << &a << endl;

    return 0;
}
