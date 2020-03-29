//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

template<typename T>
void Print(T value)
{
    std::cout << value << std::endl;
}

template<int N>
class Array
{
private:
    int m_Array[N];
public:
    int GetSize() const {return N;}
};

// pass Vector by reference to avoid copying
int main()
{
    Print<int>(12);
    Print(4.5f);
    Print("abc");
    Array<5>arr;
    Print(arr.GetSize());
    return 0;
}
