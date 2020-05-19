//
//  main_stack.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/4/30.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include "pch.h"
#include "Stack.h"

// when use, change this to int main()
// one main function is enough
int main(){
    Stack<int> a(10);
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
