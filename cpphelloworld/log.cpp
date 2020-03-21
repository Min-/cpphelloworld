//
//  log.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include "log.hpp"
#include <iostream>

int multiply (int a, int b){
    return a * b;
}

void log(const char* message){
    std::cout << message << std::endl;
}

void log(int a){
    std::cout << a << std::endl;
}

void initlog(){
    log("Initialize log.");
}

void multiply_log(int a, int b){
    int result = multiply(a, b);
    log("the result is: ");
    std::cout << result << std::endl;
}
