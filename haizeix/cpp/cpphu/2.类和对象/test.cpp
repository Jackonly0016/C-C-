/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 11:09:28 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() : z(0), w(x) {};
    A(int x, int y) : x(x), y(y), z(8), w(this->x) {}
    A(const A &a) : z(a.z), w(x) {
        this->x = a.x;
        this->y = a.y;
    }
    void say() { cout << "hello world" << endl; }
private :
    int x, y;
    const int z;
    int &w;
};

int main() {
    A *p = new A();
    A a(3, 4);
    A b = a;
    return 0;
}
