/*************************************************************************
	> File Name: 3.hzoj166.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 02 Sep 2022 09:44:20 PM CST
 ************************************************************************/

#include <iostream>
#include <string>

int main(void)
{
    std::string s1, s2;
    int n;
    
    std::cin >> s1 >> n >> s2;
    int len = s1.size();
    len = len > 100 ? 100 : len;
    std::cout << len << std::endl;
    s1.insert(n - 1, s2);
    std::cout << s1 << std::endl;
    std::cout << s1.size() - s1.rfind("x") << std::endl;
    
    return 0;
}


