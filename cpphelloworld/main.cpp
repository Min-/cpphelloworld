//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include "pch.h"

int main() {
    int n{4};
    std::cout << n << std::endl;
    
    std::vector<int> v{1,2,3,4};
    for (int i: v){
        std::cout << i+12 << std::endl;
    }
    
    return 0;
}
