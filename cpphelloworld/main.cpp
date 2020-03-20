//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include "log.hpp"

int main() {
    int x = 5;
    bool res = x == 5;
    if (res){
        log("hello world.");
    }
    return 0;
}
