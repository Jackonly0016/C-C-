/*************************************************************************
	> File Name: 1.friend.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 12 Sep 2022 04:54:35 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class People{
    int money;
public:
    People(): money(1000000) {}
    void cost() {
        money -= 10000;
    }

    void show() {
        cout << money << endl;
    }

    //友元函数
    friend void useOthersMoney(People &a);

};


void useOthersMoney(People &a) {
    a.money -= 100;
}


int main(void) {
    People xiaok;

    xiaok.show();
    useOthersMoney(xiaok);
    xiaok.show();

    return 0;
}
