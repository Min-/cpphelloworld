//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include "log.hpp"

class Entity
{
public:
    float X, Y;
    
    // constructor, all primitive types needs to be initialized.
    Entity()
    {
        X = 0;
        Y = 0;
        std::cout << "construct" << std::endl;
    }
    
    Entity(float x, float y)
    {
        X = x;
        Y = y;
        std::cout << "construct" << std::endl;
    }
    
    ~Entity()
    {
        std::cout << "destruct" << std::endl;
    }
    
    void Print()
    {
        std::cout << X << "," << Y << std::endl;
    }
};

int main()
{
    Entity e(4,5);
    e.Print();
    return 0;
}
