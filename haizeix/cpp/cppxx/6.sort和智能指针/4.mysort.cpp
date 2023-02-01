/*************************************************************************
	> File Name: 4.mysort.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 13 Sep 2022 11:01:08 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmd(int a, int b) {
    return a > b;
}

ostream &operator<<(ostream &out, const vector<int> v) {
    for (auto x:v) {
        cout << x << " ";
    }

    return out;
}


class CMP{
    int opt;
public:
    CMP(int x = 0): opt(x) {}
    bool operator()(int a, int b) {
        return opt ^ a < b;
        //return opt ? a > b : a < b;
    }
};


namespace kkb{

    void sort(int *arr, int l, int r, function<bool(int,int)>cmp=CMP()) {
        if (l >= r)
            return ;
        
        int x = l, y = r, z = arr[(l + r) >> 1];
        do {
            while (cmp(arr[x],z)) ++x;
            while (cmp(z,arr[y])) --y;
            if (x <= y) {
                swap(arr[x], arr[y]);
                ++x, --y;
            }
        } while (x <= y);
        sort(arr, l, y, cmp);
        sort(arr, l, y, cmp);
        return ;
  }
}


int main(void) {
    int brr[5] = {1, 6, 3, 5, 2};
    kkb::sort(brr, 0, 4);

    /*
    int n = 10;
    vector<int> v;

    while (n--) {
        int a;
        cin >> a, v.push_back(a);
    }

    CMP c;

    //sort(v.begin(), v.end(), cmd);
    sort(v.begin(), v.end(), c);
    sort(v.begin(), v.end(), CMP(1));
    cout << v << endl;
*/
    return 0;
}
