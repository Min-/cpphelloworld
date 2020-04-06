//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <fstream>

#include "log.hpp"



int main()
{
//implicit conversion
    int a = 5;
    double value = a;
    
    //c style cast
    double b = 2.35;
    int valueb = (int)b;
    
    // easy to search
    double s = static_cast<int>(b);
    
    std::string one = "1";
    //int oneint = static_cast<int>(one);
    int oneint = std::stoi(one);
    
    int twoint = 2;
    std::string two = std::to_string(twoint);
    
    std::string string = "12345";
    //const char another = *string.begin();
    //char another = *string.begin();
    //int another = (int)(*string.begin()); // return 49, not 1;
    int another = (int)(*(++string.begin())) - 48; //return 2
    //int another = (int)(*(string.begin()++)) - 48; return 1
    
    std::cout << another << std::endl;
    
    //std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::iterator begin = string.begin();
    std::string::iterator begin = string.begin();
    while(begin != string.end()){
        std::cout << *begin << std::endl;
        begin++;
    }
    
    
    std::vector<int> vec = {1,2,3,4};
    
    std::vector<int> receiver;
    int arr[vec.size()];
    
    std::vector<int>::iterator runner = vec.begin();
    int i = 0;
    while(runner != vec.end()){
        receiver.emplace_back(*runner + 12);
        std::cout << *runner + 12 << std::endl;
        arr[i] = (*runner) * 12;
        runner++;
        i++;
    }
    
    PrintLine();
    
    for (int v: receiver){
        std::cout << v << std::endl;
    }
    
    PrintLine();
    
    for (int v: arr){
        std::cout << v << std::endl;
    }
    
    return 0;
}
