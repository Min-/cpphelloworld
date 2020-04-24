//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <algorithm>
//#include "pch.h"

auto print = [](const int& n) { std::cout << " " << n; };

int main()
{
    int nums [] = {1,2,3,4,5};
    
    std::cout << std::all_of(nums, nums + sizeof(nums)/sizeof(int), [](int &x){return x > 1;}) << std::endl;
    
    std::for_each(nums, nums + sizeof(nums)/sizeof(int), print);
    std::cout << std::endl;
    
    std::for_each(nums, nums + sizeof(nums)/sizeof(int), [](int &x){x++;});
    
    std::for_each(nums, nums + sizeof(nums)/sizeof(int), print);
    std::cout << std::endl;
    return 0;
}
