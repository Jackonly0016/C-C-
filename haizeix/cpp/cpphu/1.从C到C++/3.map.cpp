/*************************************************************************
	> File Name: 3.map.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 03:42:15 PM CST
 ************************************************************************/

#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    string name;
    int n, age;
    set<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    cout << *s.begin() << endl;
    s.erase(s.begin());
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << endl;
    }
    map<int, string> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> age >> name;
        arr[age] = name;
    }
    for (auto iter = arr.begin(); iter != arr.end(); iter++) {
        cout << iter->second << endl;
    }
    return 0;
}
