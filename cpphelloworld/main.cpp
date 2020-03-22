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
protected:
    int X, Y;
public:
    int count;
    
    Entity()
    {
        X = 5;
        Y = 5;
        count = 0;
    }
    
    int PrintSum()
    {
        count += 1;
        log(count);
        return X + Y;
    }
};

class Player: public Entity
{
public:
    void Print()
    {
        log(PrintSum());
    }
    
    void PrintMul()
    {
        log(X * Y);
    }
    
    void ChangeX()
    {
        X += X;
    }
};


int main()
{
    Player* p = new Player;
    p->Print();
    p->Print();
    p->Print();
    
    p->PrintMul();
    p->ChangeX();
    p->PrintMul();
    
    Player p2;
    p2.Print();
    
    return 0;
}
