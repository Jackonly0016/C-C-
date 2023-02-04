#include <iostream>

struct A
{
    int x, y;
    int echo()
    {
        std::cout << "hello world" << std::endl;
        return 0;
    }
};

class B
{
    public:
        void set_xy(int x, int y)
        {
            std::cout << this << std::endl;
            this->x = x;
            this->y = y;
        }
        int echo()
        {
            std::cout << "hello world" << std::endl;
            std::cout << x << " " << y << std::endl;
            return 0;
        }
    private:
        int x, y;
};

int main()
{
    A a;
    B b;
    a.x = 3;
    a.y = 2;
    b.set_xy(3, 2);
    std::cout << &b << std::endl;
    std::cout << a.x << " " << a.y << std::endl;
    b.echo();
    return 0;
}

