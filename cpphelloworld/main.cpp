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
#include <thread>

static bool s_Finished = false;

void DoWork(){
    using namespace std::literals::chrono_literals;
    
    while (!s_Finished){
        std::cout << "working...\n";
        std::cout << "thread id: = " << std::this_thread::get_id() << std::endl;
        std::this_thread::sleep_for(1s);
    }
}

int main(){
    std::thread worker(DoWork);
    std::cin.get();
    s_Finished = true;
    
    worker.join();
    std::cout << "hello" << std::endl;
    std::cout << "thread id: = " << std::this_thread::get_id() << std::endl;
    return 0;
}
