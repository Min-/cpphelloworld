//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <memory>

int main()
{
    const int a = 3;
    int b = a;
    b = 41;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    return 0;
}
