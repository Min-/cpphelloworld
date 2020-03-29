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
#include <vector>

typedef void(*int2void)(int); // int -> void
typedef int(*int2int)(int); // int -> int

template<typename T>
void Print(T a){
    std::cout << a << std::endl;
}

template<typename T1, typename T2>
void Print2(T1 a, T2 b){
    std::cout << a << ", " << b + 1 << std::endl;
}

void HelloWorld(int a){
    std::cout << "Hello World! The value: " << a << std::endl;
}

int AddOne(int a){
    return a + 1;
}

int TimesTwo(int a){
    return a * 2;
}

// pass Vector by reference to avoid copying
int main()
{
   // void(*hello)();
    
    int2void hello = HelloWorld;

    for (int i = 0; i < 5; i++){
        hello(i);
    }
    
    auto addone = &AddOne;
    Print(addone(12));
   
    std::vector<int2void> functions = {HelloWorld, HelloWorld};
    for (int2void f: functions){
        f(12);
    }
    
    // a vector of function takes a function and return a function
    std::vector<int2int> intFunctions = {AddOne, TimesTwo};
    for (int2int f: intFunctions){
        Print(f(12));
    }
    
    Print2("hello", 3);
    std::cout << "-------" << std::endl;
    
    // lambda
    std::vector<int> values = {1,2,3,4};
    std::vector<int> res;
    for (int v: values){
        res.emplace_back([](int* x)
        {return *x+1;}(&v));
    }
    
    for (int v: res) Print(v);
    std::cout << "-------" << std::endl;
    for (int v: values) Print(v);
    
    return 0;
}
