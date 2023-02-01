/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 12 Sep 2022 05:43:47 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A{
public:
    void output() {
        cout << "hello" << endl;
    }
};

int main(void) {
    /*
    int i = 0;
    
    ++i = 4; // ok 左值, ++i效率更高，原子操作
    //i++ = 4; // error 右值

    cout << i << endl;
*/

    A a;
    A *k = &a;

    void (A::*p)() = &A::output; // 函数指针, 缺少作用域

    (k->*p)();
    (a.*p)();

    return 0;
}
