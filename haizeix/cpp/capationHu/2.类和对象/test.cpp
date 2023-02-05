#include <iostream>

class A
{
    public:
        A() = default;
        A(const A &) = delete;
        void say()
        {
            std::cout << "hello world" << std::endl;
        }
};

int main()
{
    A a;
    return 0;
}

