//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>

void* operator new(size_t size)
{
    void* ptr = malloc(size);
    std::cout << &ptr << std::endl;
    return ptr;
}

void operator delete(void* memory, size_t size)
{
    free(memory);
}

struct Object
{
    int x;
};

int main()
{
    Object* obj = new Object;
    std::cout << sizeof(obj) << std::endl;
    return 0;
}
