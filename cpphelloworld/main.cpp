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




template<class T>
void Print(T t){
    std::cout << t << std::endl;
}

int finished = 1;

class Alarm{
public:
    
    ~Alarm(){
        finished = 0;
    }
};

int main()
{ 
    {
        Alarm alarm;
        std::cout << "T1 task" << std::endl;
    }
    

    
    std::cout << finished << std::endl;
    std::cout << "run T2" << std::endl;
    
    return 0;
}
