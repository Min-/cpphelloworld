//
//  log.hpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//
// #pragma once // same as ifndef
#ifndef log_hpp // header guards
#define log_hpp

#include <stdio.h>

int multiply (int a, int b);
void log(const char* message);
void log(int a);
void initlog();
void multiply_log(int a, int b);

#endif /* log_hpp */
