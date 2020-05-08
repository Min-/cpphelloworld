//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <stdio.h>
#include <array>
#include "pch.h"

void* operator new(std::size_t n) {
    std::cout << "[Allocating " << n << " bytes]";
    return malloc(n);
}
void operator delete(void* p) throw() {
    free(p);
}

int main() {
    for (size_t i = 0; i < 24; ++i) {
        std::cout << i << ": " << std::string(i, '=') << std::endl;
    }
}
