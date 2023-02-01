/*************************************************************************
	> File Name: 3.operator.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 13 Sep 2022 10:42:42 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Point{
    int x, y;
public:
    Point();
    Point(int x, int y);
    friend Point operator+(const Point &a, const Point &b);
};

//Point::Point(): x(0), y(0) {}
Point::Point():Point(0, 0) {} //委托构造
Point::Point(int m, int n): x(m), y(n) {}

Point operator+(const Point &a, const Point &b) {
    return Point(a.x + b.x, a.y + b.y);
}

int main(void) {
    Point a(3, 4);
    Point b(2, 2);

    Point c;

    c = a + b;

    return 0;
}
