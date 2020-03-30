//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <thread>
#include <chrono>

typedef long(*long2long)(long);

struct Timer{
    typedef std::chrono::time_point<std::chrono::steady_clock> time;
    time start, end;
    std::chrono::duration<float> duration;
    
    Timer(){
        start = std::chrono::high_resolution_clock::now();
    };
    
    ~Timer(){
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        std::cout << "Total time: " << duration.count() * 1000.0f << " ms" << std::endl;
    }
    
};

long FracRecursive(long a){
    Timer timer;
    if (a == 1){
        return 1;
    } else {
        return FracRecursive(a - 1) * a;
    }
}

long FracImperative(long a){
    Timer timer;
    long res = 1;
    for (long i = 1; i <= a; i++){
        res *= i;
    }
    return res;
}

void TimeFunction(long2long function, long n){
    auto start = std::chrono::high_resolution_clock::now();
    function(n);
    auto stop = std::chrono::high_resolution_clock::now();
    
    std::chrono::duration<float> duration = stop - start;
    std::cout << duration.count() << std::endl;
}

int main(){
    TimeFunction(FracRecursive, 20);
    TimeFunction(FracImperative, 20);
    //FracRecursive(20);
    //FracImperative(20);
    return 0;
}
