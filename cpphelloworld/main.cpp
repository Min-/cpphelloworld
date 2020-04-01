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

template<class T>
void Print(T t){
    std::cout << t << std::endl;
}

template<typename T, typename F>
auto map(T input, F func){
    std::transform(input.begin(), input.end(), input.begin(), func);
    return input;
}

template<typename T, typename F>
auto map2(T input, F func){
    std::transform(input.begin(), input.end(), input.begin(), func);
    return input;
}


int main(){
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<std::string> str{"Programming", "in", "a", "functional", "style."};
    std::vector<int> strlen;
    
    std::transform(vec.begin(), vec.end(), vec.begin(),
               [](int i){ return i*i;} );
    std::transform(str.begin(), str.end(), std::back_inserter(strlen),
      [](std::string s){ return s.length ();} );
    
    for (int n: vec)
        Print(n);
    
    for (std::string s: str)
        Print(s);
    
    for (int n: strlen)
        Print(n);
    
    Print("--------------");
    
    auto res = map(vec, [](int x){return x * x;});
    
    for (auto x: res)
        Print(x);
    
    return 0;
}
