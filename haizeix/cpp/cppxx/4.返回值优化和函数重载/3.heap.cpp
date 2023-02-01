/*************************************************************************
	> File Name: 3.heap.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 12 Sep 2022 12:26:03 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

class A{
    int x;
public:
    A() {
        cout << this << " constructor A" << endl;
    }
    ~A() {
        cout << this << " destructor A" << endl;
    }
};

int main(void) {
    int n = 10;

    cout << "malloc int" << endl;
    int *p = (int *)malloc(sizeof(int) * n);
    
    cout << p << endl;
    cout << &p << endl;

    free(p);

    cout << "new int" << endl;
    int *q = new int[10];
    delete[] q;

    cout << "malloc A" << endl;
    A *k = (A *)malloc(sizeof(A) * n);
    
    //原地构造
    for (int i = 0; i < n; i++) {
        new(k + i) A();
    }

    free(k);
    
    cout << "new A" << endl;
    A *s = new A[10];
    delete[] s;

    return 0;
}
