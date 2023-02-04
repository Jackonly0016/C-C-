/*************************************************************************
	> File Name: 9.succeed.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 20 Sep 2022 10:19:12 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define P_ADD(obj, a) cout << #obj "." #a  " = " << &(obj.a)

class Animal {
public :
    Animal(string name) : __name(name) {
        cout << "Animal constructor " << this << endl;
    }
    string name() { return this->__name; }

    int x, y, z;
    string __name;
    ~Animal() {
        cout << "Animal destructor " << this << endl;
    }
};

class Cat : public Animal {
public :
    Cat() : Animal("hello kitty") {
        cout << "Cat constructor " << this << endl;
    }
    void say() {
        cout << "my name is " << this->name() << endl;
    }
    ~Cat() {
        cout << "Cat destructor " << this << endl;
    }
};

ostream &operator<<(ostream &out, const Cat &a) {
    out << "<class Cat> " << &a << endl;
    P_ADD(a, x) << endl;
    P_ADD(a, y) << endl;
    P_ADD(a, __name) << endl;
    P_ADD(a, z) << endl;
    return out;
}

int main() {
    Animal a("any");
    Cat c;
    cout << sizeof(a) << " " << sizeof(c) << endl;
    cout << c << endl;
 

    return 0;
}
