/*************************************************************************
	> File Name: 4.mutable.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 29 Jan 2023 11:01:04 PM CST
 ************************************************************************/

#include <iostream>

class A
{
    private:
        mutable int m_a;

    public:
        A(int a) : m_a(a) {}
        
        void matest() const;
        
        void macout() const;
};

void A::matest() const
{
    //m_a = 10; //被const修饰的函数不允许修饰任何类状态值（类里面的数据）
    m_a = 10; //mutable突破这层限制
}

void A::macout() const
{
    std::cout << m_a << std::endl;
}

int main()
{
    const A a(1);
    a.macout();
    a.matest();
    a.macout();
    
    return 0;
}


