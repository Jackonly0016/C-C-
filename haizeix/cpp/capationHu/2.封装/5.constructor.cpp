#include <iostream>

struct A
{
    A()
    {
        std::cout << "default constructor" << std::endl;
    }
    A(int n)
    {
        std::cout << "an int constructor" << std::endl; 
        x = n;
        y = n;
    }
    void output()
    {
        std::cout << this->x << " " << this->y << std::endl; 
    }
    int x, y;
};

int main()
{
    std::cout << "pre position" << std::endl;
    A a();
    A b(6);
    b.output();
    std::cout << "next position" << std::endl;
    return 0;
}

