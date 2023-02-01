/*************************************************************************
	> File Name: 3.set.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Nov 2022 10:53:47 PM CST
 ************************************************************************/
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(3);
    s.insert(6);
    s.insert(-12);
    s.insert(9);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << endl;
    }
    s.erase(s.begin());
    return 0;
}
