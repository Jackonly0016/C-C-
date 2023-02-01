/*************************************************************************
	> File Name: HZOJ-245.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Nov 2022 08:14:18 PM CST
 ************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    unsigned int n;
    std::vector<int> arr;
    std::cin >> n;
    for ( int i = 0, a; i < n; ++i )
    {
        std::cin >> a;
        arr.push_back(a);
    }
    std::sort(arr.begin(), arr.end());
    unsigned int p = arr[n / 2];
    unsigned int sum = 0;
    for ( int i = 0; i < n; ++i )
    {
        sum += abs(arr[i] - p);
    } 
    std::cout << sum << std::endl;
    return 0;
}
