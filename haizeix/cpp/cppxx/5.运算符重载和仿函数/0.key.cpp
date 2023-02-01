/*************************************************************************
	> File Name: 0.key.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 12 Sep 2022 04:49:48 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A{
public:
    A() = default;
private:
    A(const A &a) = delete;
    A &operator=(const A &a);

};

int main(void) {
    A a;
    A b;
    //a = b;

    return 0;
}
