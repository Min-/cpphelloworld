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
    
    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
    
    void Print()
    {
        std::cout << X << "," << Y << std::endl;
    }
};


class Player: public Entity
{
public:
    const char* name;
    
    Player()
    {
        name = "no name";
        X = 0;
        Y = 0;
    }
    
    void PrintName()
    {
        log(name);
    }
};

int main()
{
    Player player;
    player.Print();
    player.X = 5.0;
    player.Y = 10.4;
    
    player.Move(5,2);
    player.Print();
    player.PrintName();
    
    log(sizeof(player));
    return 0;
}
