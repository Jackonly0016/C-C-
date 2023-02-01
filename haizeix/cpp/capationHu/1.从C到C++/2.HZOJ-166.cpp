/*************************************************************************
	> File Name: 2.HZOJ-166.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Nov 2022 09:44:18 PM CST
 ************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int pos;
    cin >> a >> pos >> b;
    cout << min(100, (int)a.size()) << endl;
    a.insert(pos - 1, b);
    cout << a << endl;
    cout << a.size() - a.rfind("x") << endl;
    return 0;
}
