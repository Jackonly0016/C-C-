/*************************************************************************
	> File Name: 16.transfer_constructor.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 10:49:13 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>

class BigInt
{
    public:
        BigInt()
        {

        }

        BigInt(int x)
        {
            num.push_back(x);
            process_digit();
        }

        friend std::ostream &operator<<(std::ostream &out, const BigInt &a);

    private:
        std::vector<int> num;
        void process_digit()
        {
            for ( unsigned int i = 0; i < num.size(); ++i )
            {
                if ( num[i] < 10 )
                {
                    continue;
                }
                if ( i + 1 == num.size() )
                {
                    num.push_back(0);
                }
                num[i + 1] = num[i] / 10;
                num[i] %= 10;
            }
        }
};

std::ostream &operator<<(std::ostream &out, const BigInt &a)
{
    for ( int i = a.num.size() - 1; i >= 0; i-- )
    {
        out << a.num[i];
    }
    return out;
}

void func(BigInt a)
{
    std::cout << "func : " << a << std::endl;
}

int main()
{
    BigInt a;
    a = 1234;
    std::cout << a << std::endl;
    func(5670); /* 转换构造 */
    return 0;
}

