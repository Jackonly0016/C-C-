/*************************************************************************
	> File Name: 3.overload.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 12 Sep 2022 04:38:14 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int inc(int x) {
    return x++;
}

int inc(int x, int y = 3) {
    return x + y;
}

int inc1(double x) {
    return x++;
}

int inc(char x) {
    return x++;
}


int inc(int *p) {
    return *p;
}

//冲突
/*
int inc(int *const p) {
    return *p;
}
*/

// 不冲突
int inc(const int *p) {
    return *p;
}

int main(void) {

    return 0;
}
