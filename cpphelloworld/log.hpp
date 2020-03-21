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
#include <iostream>

int multiply (int, int);
void log(const char*);
void log(int);
void log(std::string);
void initlog();
void multiply_log(int, int);

#endif /* log_hpp */
