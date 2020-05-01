//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "pch.h"
#include "Show.h"
#include "Comparable.h"

#define PRINTER(name) printer(#name)


void printer(std::string obj) {
    std::cout << obj << std::endl;
}


class Names{
public:
    std::string name;
    Names(std::string name)
    :name(name){};
    
    bool equal(Names& that){
        std::cout << "running equal " << std::endl;
        bool res = name == that.name;
        if (res)
            std::cout << "equal" << std::endl;
        else
            std::cout << "not equal" << std::endl;
        return res;
    }

    Compare compare(Names& that){
        if (that.name > name){
            return Compare::gt;
        } else if (that.name < name){
            return Compare::ls;
        } else {
            return Compare::eq;
        }
    }
};

int main(){
    Names name("Tom");
    Names another("Mary");
    name.equal(another);
    
    //std::cout << name.compare(another) << std::endl;

    PRINTER(name);
    
    int a = 1;
    int b = 2;
    std::string astr = Show<int>::show(a);
    std::cout << astr << std::endl;
    std::cout << Show<Compare>::show(name.compare(another)) << std::endl;
    
    Compare res = Comparable<int>::compare(a, b);
    std::cout << Show<Compare>::show(res) << std::endl;
    
    return 0;
}


