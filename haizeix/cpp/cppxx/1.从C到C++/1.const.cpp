/*************************************************************************
	> File Name: 1.const.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 02 Sep 2022 09:08:11 PM CST
 ************************************************************************/

#include <iostream>

class A
{
    public:
        int x;
        mutable int y;
        
        A() : y(124), x(y - 1) {} /* error 赋值顺序错误 */

        void say1() const
        {
            std::cout << x << std::endl;
            std::cout << y << std::endl;
        }

        void say2() {}
};

int main(void)
{
    const A a;
    a.say1();

    return 0;
}


