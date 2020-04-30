//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include "pch.h"
#include "Maybe.hpp"
#include "for_each_n.hpp"


int main(){
    std::vector<int> vec = {1,2,3,4,5};
    boost::algorithm::for_each_n(vec.begin(), 5, [](int x){
        std::cout << x+1 << std::endl;
        return x+1;});
    
    
    return 0;
}


