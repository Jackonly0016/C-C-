/*************************************************************************
	> File Name: 2.hzoj245.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 02 Sep 2022 09:37:26 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    std::vector<int> v;
    int n;
    int t;
    std::cin >> n;
    for ( unsigned int i = 0; i < n; ++i )
    {
        std::cin >> t, v.push_back(t);
    }

    std::sort(v.begin(), v.end());

    int pos = v[n / 2];
    int sum = 0;
    for ( unsigned int i = 0; i < n; ++i )
    {
        sum += abs(v[i] - pos);
    }
    std::cout << sum << std::endl;

    return 0;
}


