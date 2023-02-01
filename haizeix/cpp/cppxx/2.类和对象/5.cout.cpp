/*************************************************************************
	> File Name: 5.cout.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 12 Sep 2022 11:59:24 AM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>

#define BEGINS(x) namespace x{
#define ENDS(x) }

BEGINS(kkb)
class Ostream {
public:
    // 运算符重载
    Ostream &operator<<(int x) {
        printf("%d", x);
        return *this;
    }
    Ostream &operator<<(const char *x) {
        printf("%s", x);
        return *this;
    }

};

Ostream cout;

ENDS(kkb)


int main(void) {

    int n = 333;

    std::cout << n << " " << 111;
    std::cout << std::endl;
    kkb::cout << n << " " << 111;
    std::cout << std::endl;

    return 0;
}
