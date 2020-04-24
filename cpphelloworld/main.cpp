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


int main()
{
    int nums [] = {1,2,3,4,5};
    const int target = 5;
    
    std::cout << sizeof(nums) << std::endl;
    std::cout << sizeof(nums) / sizeof(int) << std::endl;
    
    if (std::binary_search(nums, nums + sizeof(nums)/sizeof(int), target))
        std::cout << "found" << std::endl;
    else
        std::cout << "not found" << std::endl;
    return 0;
}
