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
    std::unique_ptr<int *> up = std::make_unique<int *>(nums);
    
    std::cout << *p << std::endl;
    std::cout << *(p+1) << std::endl;
    
    *(p+1) = 20;
    std::cout << *(p+1) << std::endl;
    std::cout << &p << std::endl;
    
    std::cout << **up << std::endl;
    
    return 0;
}
