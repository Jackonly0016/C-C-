/*************************************************************************
	> File Name: 1.construct.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 11 Sep 2022 06:38:35 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Data {
private:
    int x, y;
public:
    Data(int a, int b): x(a), y(b) {
    }
};


class A {
public:
    Data d;
    int x;
    //储存空间完成
    A():d(3, 4) {
        cout << this << ":constructor" << endl;
    }
    //逻辑构造完成

    // 就近原则
    // 初始化列表
    A(int x):x(x), d(3, 4) {
        //this->x = x;
        cout << this << ":transform constructor" << endl;
    }
    
    A(A &x):d(3, 4) {
        cout << this << ":copy constructor" << endl;
    }

    A &operator=(const A &a) {
        cout << "operator = " << endl;
        return *this;
    }

    ~A() {
        cout << this << ":destructor" << endl;
    }

};

int main(void) {

    //A b;
    //1.默认构造
    A a;
    //2.有参构造&转换构造
    a = (A)100; 
    //1.匿名对象, 转换构造
    //2.赋值操作

    //3.拷贝构造
    A b(a);

    /*
    char c = (char)0xff; // 隐士转换
    cout << sizeof(0xff) << endl;

    if (c == 0xffffffff) {
    //if (c == (char)0xff) {
        cout << "same" << endl;
    } else {
        cout << "diff" << endl;
    }
*/

    return 0;
}
