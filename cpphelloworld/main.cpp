//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include "pch.h"
#include <any>
#include <variant>

int main()
{
    std::any data;
    data = 2;
    //data = "min";  // it can't be casted into a std::string
    
    int string = std::any_cast<int>(data);
    std::cout << string << std::endl;
    
    // variant is safer
    std::variant<int, std::string> datav;
    datav = 2;
    datav = "min";
    std::string min = std::get<std::string>(datav);
    std::cout << min << std::endl;
    
    return 0;
}
