#include <iostream>

struct A
{
    A() : next(nullptr)
    {
        std::cout << this << " default constructor" << std::endl;
    }

    A(A *obj)
    {
        this->next = obj;
        this->next->arr = new int[1000];
    }

    A(int n) : next(nullptr)
    {
        std::cout << this << " an int constructor" << std::endl;
        x = n;
        y = n;
    }

    A(const A &obj) : next(nullptr)
    {
        std::cout << this << " copy constructor" << std::endl;
        this->x = obj.x;
        this->y = obj.y;
    }

    void output()
    {
        std::cout << this->x << " " << this->y << std::endl;
    }

    int x, y;
    int *arr;
    A *next;
    ~A()
    {
        if (this->next)
        {
            delete this->next->arr;
        }
        std::cout << this << " destructor" << std::endl;
    }
};

void func(int &x)
{
    x += 5;
}

A aa;
A bb(&aa);
A cc(&bb);

int main()
{
    int n = 7;
    func(n);
    std::cout << n << std::endl;
    std::cout << "pre position" << std::endl;
    A a;
    A b = 8;
    A c(a);
    std::cout << "a = " << &a << std::endl;
    std::cout << "b = " << &b << std::endl;
    std::cout << "c = " << &c << std::endl;
    std::cout << "aa = " << &aa << std::endl;
    std::cout << "bb = " << &bb << std::endl;
    std::cout << "cc = " << &cc << std::endl;
    b.output();
    b = 6;
    b.output();
    std::cout << "next position" << std::endl;
    return 0;
}

