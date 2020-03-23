//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>

int main(){
    int sum = 0;
    for (int i = 1; i < 1000; i++){
        if (i % 3 == 0 or i % 5 == 0){
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
