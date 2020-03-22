//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include "log.hpp"


int main()
{
    //int arr[3];
    const int size = 5;
    int arr[size] = {1,2,3}; // stack allocated array (destroyed when finished), on-site
    int* arr2 = arr;
    int* arr3 = new int[5]; // heap (alive until the program ends) you have to jump around.
    
    
    *(arr2 + 2) = 100;
    
    log(arr[2]);
    log(arr2[1]);
    log(arr2[2]);
    std::cout << &arr << std::endl;
    std::cout << arr2 << std::endl;
    std::cout << &arr2 << std::endl;
    std::cout << *arr << std::endl;
    std::cout << *arr2 << std::endl;

    std::cout << arr3 << std::endl;
    std::cout << &arr3 << std::endl;
    std::cout << *arr3 << std::endl;
    std::cout << *(&arr3) << std::endl;
    delete[] arr3;
    
    log("end");
    return 0;
}
