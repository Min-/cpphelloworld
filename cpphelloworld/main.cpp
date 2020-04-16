//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
//#include "pch.h"

class Int{
public:
    int x;
};

template <class T>
class IntString: public std::string, public Int{
public:
    IntString x;
    
    IntString(std::string a)
    :x(a){};
    IntString(int a)
    :x(a){};
};

template <class T>
// template is declaration
void swap(T &x, T &y){
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    std::string a = "this";
    std::string b = "that";
    std::cout << "a " << a << "\n" << "b " << b << std::endl;
    swap(a, b);
    std::cout << "a " << a << "\n" << "b " << b << std::endl;
    
    
    IntString c(3);
    IntString d((std::string)"abc");
    std::cout << "c " << c << "\n" << "d " << d << std::endl;
    swap(c, d);
    std::cout << "c " << c << "\n" << "d " << d << std::endl;

    
    return 0;
}
