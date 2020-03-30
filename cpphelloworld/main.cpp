//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <array>
#include <vector>

namespace apple {
    void PrintApple(std::string s){
        std::string temp = s;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
}

int main(){
    std::string a = "big";
    apple::PrintApple(a);
   return 0;
}
