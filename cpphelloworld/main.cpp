//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>

std::string AddString(const std::string& s1, const std::string& s2)
{
    const std::string out = s1 + s2;
    return out;
}

int main()
{
    const char* name = "viola";
    std::cout << name << std::endl;
    char min[6] = {'v', 'i', 'o', 'l', 'a', '\0'};
    std::string love = "I love ";
    std::string name2 = "viola";
    std::cout << min << std::endl;
    std::cout << name2 << std::endl;
    std::cout << name2.find('a') << std::endl;
    std::cout << AddString(love, name2) << std::endl;
    return 0;
}
