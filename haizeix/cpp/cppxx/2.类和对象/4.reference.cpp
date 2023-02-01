/*************************************************************************
	> File Name: 4.reference.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 12 Sep 2022 10:38:47 AM CST
 ************************************************************************/

#include <iostream>

//尽量不用
//using namespace std;

namespace kkb {

class Washer {
public:
    std::string brand;
    int vol;

    void getBrand();
    void wash();
};

void Washer::getBrand() {
    std::cout << brand << std::endl;
    std::cout << this << std::endl;
}

Washer xte;

}

// 尽量不用
//using namespace kkb;

void getBrand(kkb::Washer *const self) {
    std::cout << self->brand << std::endl;
    std::cout << self << std::endl;
}


int main(void) {
    kkb::Washer ddy;
    ddy.brand = "大地鸭";
    ddy.getBrand();
    std::cout << &ddy << std::endl;

    kkb::Washer xmz;
    xmz.brand = "西门子";
    xmz.getBrand();
    std::cout << &xmz << std::endl;

    getBrand(&ddy);

    kkb::xte.brand = "xxx";

    return 0;
}
