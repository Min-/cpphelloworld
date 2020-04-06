//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include "pch.h"

class Entity{
public:
    virtual void PrintName(){}
};

class Player : public Entity{
};

class Enemy : public Entity{
};

int main()
{
    std::unique_ptr<Player> player1;
    Player* player2 = new Player();
    Entity* actualEnemy = new Enemy();
    
    Entity* player3 = player2;
    
    //Player* player4 = player3; //Cannot initialize a variable of type 'Player *' with an lvalue of type 'Entity *
    Player* player4 = dynamic_cast<Player*>(player3); // Entity needs to be polymorphic
    Player* player5 = dynamic_cast<Player*>(actualEnemy);
    
    std::cout << player4 << std::endl;
    std::cout << player5 << std::endl; // null pointer
    
    if (dynamic_cast<Player*>(actualEnemy)){
        std::cout << "dynamic casting success." << std::endl;
    } else {
        std::cout << "return null pointer" << std::endl;
    }
    return 0;
}
