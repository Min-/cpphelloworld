//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>


#ifdef MZ_DEBUG
#define LOG(x) std::cout << x << std::endl;
#elif defined(MZ_RELEASE)
#define LOG(x) std::cout << "release mode." << std::endl;
#endif



template<class T>
T addTwo(T a, T b){
    return a + b;
}

template<typename T>
void Print(T a){
    std::cout << a << std::endl;
}

// pass Vector by reference to avoid copying
int main()
{
    std::cout << "hello" << std::endl;
    Print(addTwo(12.4f, 3.14f));
    LOG("world");
    return 0;
}
