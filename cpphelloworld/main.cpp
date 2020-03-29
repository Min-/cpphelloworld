//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <array>


template<typename T>
void Print(T a){
    std::cout << a << std::endl;
}

// pass Vector by reference to avoid copying
int main()
{
    std::array<int, 5> data;
    data[12] = 5;
    Print(data.size());
    Print(data[12]);
    Print(data[0]);
    
    return 0;
}
