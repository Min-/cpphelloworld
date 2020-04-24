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
    const int targets [] = {5,20,18,30,1,0};
    
    std::cout << sizeof(nums) << std::endl;
    std::cout << sizeof(nums) / sizeof(int) << std::endl;
    
    for (const int target : targets){
        std::cout << "target: " << target << " " ;
        if (std::binary_search(nums, nums + sizeof(nums)/sizeof(int), target))
            std::cout << "found" << std::endl;
        else
            std::cout << "not found" << std::endl;
    }
    return 0;
}
