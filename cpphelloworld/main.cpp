//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include "log.hpp"

class Printable
{
public:
    virtual std::string GetClassName() = 0;
};

class Entity: public Printable
{
public:
    virtual std::string GetName() = 0;
    std::string GetClassName() override {return "Entity";}
};

class Player: public Entity
{
private:
    std::string m_Name;
public:
    // constructor
    Player(const std::string& name)
        :m_Name(name){}
    
    std::string GetName() override {return m_Name;}
    std::string GetClassName() override {return "Player";}
};

void Print(Printable* obj)
{
    log(obj->GetClassName());
}

int main()
{
    Player* player = new Player("min");
    log(player->GetName());
    log(player->GetClassName());
    Print(player);
    
    return 0;
}
