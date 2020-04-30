//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include "pch.h"
//#include "Maybe.hpp"
//#include "for_each_n.hpp"
#include "DataStructures.hpp"

int main(){
    Stack<int> a;
    std::cout << sizeof(a) << std::endl;
    std::cout << &a << std::endl;
    a.push(12);
    a.push(13);
    
    int found = a.search(12);
    std::cout << "search: " << found << std::endl;
    
    int found2 = a.search(100);
    std::cout << "search: " << found2 << std::endl;
    
    a.peek();
    a.pop();
    a.pop();
    a.pop();
    
    a.push(1);
    a.push(2);
    a.push(3);
    a.peek();
    a.pop();
    
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(int) << std::endl;
    
    bool* arr = new bool [12];
    std::cout << sizeof(arr) << std::endl;
    std::cout << sizeof(arr[0]) << std::endl;
    
    std::cout << sizeof(nullptr) << std::endl;
    
    return 0;
}


