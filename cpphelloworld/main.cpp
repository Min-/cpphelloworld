//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>


int main(){
    //int* array = new int[50];
    int** a2d = new int*[50];
    for (int i = 0; i < 50; i++){
        a2d[i] = new int[50];
    }
    
    for (int i = 0; i < 50; i++){
        delete[] a2d[i];
    }
    delete[] a2d;
    
    int* array = new int[5*5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            array[i + j * 5] = 0;
        }
    }
    
    return 0;
}
