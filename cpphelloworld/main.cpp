//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <memory>

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
    
    void Print()
    {
        std::cout << "print function" << std::endl;
    }
};

class ScopedPtr
{
private:
    Entity* m_Ptr;
    std::time_t m_result;
public:
    ScopedPtr(Entity* ptr)
        : m_Ptr(ptr), m_result(std::time(nullptr))
    {
        std::cout << std::asctime(std::localtime(&m_result)) << std::endl;
        std::cout << "scoped ptr created." << std::endl;
    }
    
    ~ScopedPtr()
    {
        std::cout << "scoped ptr deleted." << std::endl;
        std::cout << std::asctime(std::localtime(&m_result)) << m_result << " seconds since the Epoch\n";
        delete m_Ptr;
    }
};

int main()
{
    {
        std::shared_ptr<Entity> shareE0;
        {
            std::unique_ptr<Entity> entity = std::make_unique<Entity>();
            entity->Print();
        }
        {
            std::shared_ptr<Entity> shareE = std::make_shared<Entity>();
            shareE0 = shareE;
            shareE0->Print();
        }
    }
    
    return 0;
}
