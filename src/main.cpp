//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include "pch.h"
#include <ranges>

int main() {
    int n{4};
    std::cout << n << std::endl;
    
    std::vector<int> v{1,2,3,4};
    for (int i: v){
        std::cout << i+12 << std::endl;
    }
    
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};

    auto num = 12;
    
    auto results = numbers | std::views::filter([](int n){ return n % 2 == 0; })
                           | std::views::transform([=](int n){ return n * num; });
                             
    for (auto v: results) std::cout << v << " ";
    std::cout << std::endl;
    
    return 0;
}
