/*************************************************************************
	> File Name: 4.public.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 06:34:59 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct A {
    int x, y;
    int echo() {
        cout << "hello world" << endl;
        return 0;
    }
};

class B {
public :
    void set_xy(int x, int y) {
        cout << this << endl;
        this->x = x, this->y = y;
    }
    int echo() {
        cout << "hello world" << endl;
        cout << x << " " << y << endl;
        return 0;
    }
private :
    int x, y;
};

int main() {
    A a;
    B b;
    a.x = 3, a.y = 2;
    b.set_xy(3, 2);
    cout << &b << endl;
    cout << a.x << " " << a.y << endl;
    b.echo();
    return 0;
}
