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

// pass Vector by reference to avoid copying
int frac(int x){
    if (x == 1){
        return 1;
    } else {
        return x * frac(x - 1);
    }
}

int frac2(int x){
    int res = 1;
    for (int i = 1; i <= x; i++){
        res *= i;
    }
    return res;
}

int main(){
   std::cout << frac2(5) << std::endl;
   return 0;
}
