/*************************************************************************
	> File Name: 1.245.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 10:52:28 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX_N 100000
int a[MAX_N + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    nth_element(a + 1, a + (n + 1) / 2, a + 1 + n);
    int p = a[(n + 1) / 2], ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += abs(a[i] - p);
    }
    cout << ans << endl;
    return 0;
}
