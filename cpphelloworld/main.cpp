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
    int a = 50;
    double value = (double)a;
    //double doublev = *(double*)&a;
    std::cout << value << std::endl;
    //std::cout << doublev << std::endl;
    return 0;
}
