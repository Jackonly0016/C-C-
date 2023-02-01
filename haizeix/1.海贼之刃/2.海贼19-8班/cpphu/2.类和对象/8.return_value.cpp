/*************************************************************************
	> File Name: 8.return_value.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 20 Sep 2022 12:09:24 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() {
        cout << "constructor" << endl;
    }
    A(const A &obj) {
        cout << "copy constructor" << endl;
    }
};

A func() {
    A temp;
    return temp;
}

int main() {
    A a(func());
    return 0;
}
