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

auto AddOne(int a){
    return a+1;
}

// pass Vector by reference to avoid copying
int main()
{
    auto as = 6;
    Print<int>(AddOne(as));
    
    std::vector<std::string> string;
    string.emplace_back("Apple");
    string.emplace_back("Orange");
    
    for (std::string s : string){
        Print(s);
    }
    
    for (std::vector<std::string>::iterator it = string.begin();
         it != string.end(); it++){
        Print(*it);
    }
    
    for (auto it = string.begin(); it != string.end(); it++){
        Print(*it);
    }
    
    return 0;
}
