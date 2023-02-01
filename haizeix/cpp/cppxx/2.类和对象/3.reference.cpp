/*************************************************************************
	> File Name: 3.reference.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 11 Sep 2022 09:18:12 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main(void) {
    
    //4.常引用
    const int &b = 10; //read only
    //偷摸开辟的内存
    *(int *)&b = 100; // 修改内容
    cout << b << endl;
    cout << &b << endl;

    return 0;
}
