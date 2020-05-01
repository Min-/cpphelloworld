//
//  Show.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/5/1.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <stdio.h>
#include "Show.h"

template <> struct Show<int>;
std::string(*Show<int>::show)(int) = &std::to_string;

template <> struct Show<bool>;
std::string Show<bool>::show (bool b){
    return b ? "true" : "false";
}
