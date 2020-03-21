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
    virtual std::string GetName(){return "Entity";}
};


class Player: public Entity
{
private:
    std::string m_Name;
public:
    // constructor
    Player(const std::string& name)
    : m_Name(name){}
    
    std::string GetName() override {return m_Name;}
};

int main()
{
    Entity e;
    log(e.GetName());
    
    Entity* en = &e;
    std::cout << en->GetName() << std::endl;
    
    Player* player = new Player("min");
    log(player->GetName());
    
    Entity* ent = player;
    log(ent->GetName());
    log(sizeof(player));
    log(sizeof(*player));
    
    
    return 0;
}
