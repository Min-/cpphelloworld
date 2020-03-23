//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity(): m_Name("unknown"){};
    Entity(const String& name): m_Name(name){};
    
    const String& GetName() const {return m_Name;};
};

int main()
{
    Entity e;
    std::cout << &e << std::endl;
    std::cout << e.GetName() << std::endl;
    Entity* e2 = new Entity; // heap, return an Entity*, where it is on the heap
    std::cout << e2->GetName() << std::endl;
    String name = "name3";
    std::cout << &name << std::endl;
    Entity e3(name); // Stack, Do this a much as you can, fastest way
    std::cout << e3.GetName() << std::endl;
    Entity e4 = Entity("e4"); // Stack, Do this a much as you can
    std::cout << e4.GetName() << std::endl;
    delete e2;
    
    return 0;
}
