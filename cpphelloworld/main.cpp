//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <fstream>

#include "log.hpp"



int main()
{
    int a = 3;
    // this will create an error: being freed was not allocated, because a is deleted before a_ptr is deleted.
    //std::unique_ptr<int> a_ptr(&a);
    //std::cout << *a_ptr << std::endl;
    
    std::unique_ptr<int> b_ptr(new int(a));
    std::cout << b_ptr << std::endl;
    
    std::unique_ptr<int> c_ptr = std::move(b_ptr);
    std::cout << *c_ptr << std::endl;
    //std::cout << *b_ptr << std::endl;
    
    std::cout << b_ptr << std::endl; // null pointer
    
    int* d_ptr;
    d_ptr = &a;
    std::cout << d_ptr << std::endl;
    std::cout << *d_ptr << std::endl;
    std::cout << &a << std::endl;
    return 0;
}
