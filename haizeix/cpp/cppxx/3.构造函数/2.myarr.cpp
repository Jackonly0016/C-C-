/*************************************************************************
	> File Name: 2.myarr.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 11 Sep 2022 07:32:59 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

class Array {
private:
    int n, end;
    int *data;
public:
    // 定义了构造函数，就不会生成默认构造
    Array(int n) {
        this->n = n;
        this->data = new int[n];
    }
 
    Array(Array &a) {
        this->n = a.n;
        this->data = new int[this->n];
        for (int i = 0; i < n; i++) {
            this->data[i] = a[i];
        }
    }

    size_t size() {
        return n;
    }

    int &at(int idx) {
        return data[idx];
    }

    int &operator[](int idx) {
        if (idx < 0 || idx >= n) {
            return end;
        }
        return data[idx];
    }

    void output() {
        cout << "Array(" << data << "):";
        for (int i = 0; i < n; i++) {
            i && cout << ",";
            cout << data[i];
        }
        cout << endl;
    }

    ~Array() {
        delete[] data;
    }

};


int main(void) {
    Array arr(10);
    for (int i = 0; i < arr.size(); i++) {
        //arr.at(i) = rand() % 100;
        //运算符重载
        arr[i] = rand() % 100;
    }
    
    arr.output();

    //Array brr(arr);
    Array brr = arr;
    brr.output();
    brr[3] = 10000;

    arr.output();
    brr.output();

    return 0;
}
