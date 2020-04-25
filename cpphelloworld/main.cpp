//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include "pch.h"

int main()
{
    int nums [] = {1,2,3,4,5};
    int * const p = nums;

    std::unique_ptr<int []> up(new int [5]);
    up[0] = 450;
    up[1] = 200;
    
    std::unique_ptr<std::vector<int>> vp{new std::vector<int>()};
    vp->emplace_back(12);
    vp->emplace_back(45);
    
    std::cout << *p << std::endl;
    std::cout << *(p+1) << std::endl;
    
    *(p+1) = 20;
    std::cout << *(p+1) << std::endl;
    std::cout << &p << std::endl;
    
    std::cout << &up << std::endl;
    std::cout << up[1] << std::endl;
    std::cout << *vp->begin() << std::endl;
    
    return 0;
}
