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

void PrintVector(std::vector<int> vector){
    for (int v: vector){
        std::cout << v << ", ";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> values = {4,2,6,1,3};
    std::vector<int> values2 = values;
    std::sort(values2.begin(), values2.end(), std::greater<>());
    PrintVector(values2);
    
    std::sort(values2.begin(), values2.end(), [](int a, int b){return a < b;});
    PrintVector(values);
    PrintVector(values2);
    
    return 0;
}
