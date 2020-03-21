//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include "log.hpp"

void increment(int& value)
{
    value++;
}

int add1(int value)
{
    return value + 1;
}

int main()
{
    int a = 5;
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    increment(a);
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    a = a + 1;
    std::cout << add1(5) << std::endl;
    std::cout << &a << std::endl;
    
    return 0;
}
