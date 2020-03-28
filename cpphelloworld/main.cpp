//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>

class Entity
{
public:
    Entity()
    {
        std::cout << "create a Entity" << std::endl;
    }
    
    ~Entity()
    {
        std::cout << "destroy a Entity" << std::endl;
    }
};

int main()
{
    Entity e;
    std::cout << "hello world" << std::endl;
    {Entity e2;}
    std::cout << "hello world #2" << std::endl;
    return 0;
}
