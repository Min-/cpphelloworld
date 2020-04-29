//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include "pch.h"
//#include "Maybe.hpp"
#include "classHeader.hpp"

int main(){
    std::cout << "hello " << std::endl;
    
    A2DD a(12, 45);
    int ans = a.getSum();
    std::cout << ans << std::endl;
    
    Maybe<bool> d(true);
    std::cout << d.Add2() << std::endl;
    
    Maybe<int> b(12);
    std::cout << b.Add2() << std::endl;
    
    Maybe<int> c(100);
    std::cout << c.Add3() << std::endl;
    
    
    return 0;
}


