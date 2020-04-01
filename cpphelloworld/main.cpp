//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <fstream>




template<class T>
void Print(T t){
    std::cout << t << std::endl;
}


int main()
{
    std::string filename("/Users/min/Downloads/testtext.txt");
    
    std::ifstream file(filename);
    std::string str;
    std::string string;
    std::vector<std::string> file_contents;
    while (std::getline(file, str))
    {
        file_contents.emplace_back(str);
    }
    
    Print(string);
    Print(&file_contents);
    //Print(*(&file_contents));
    Print(&file_contents[0]);
    Print(&file_contents[1]);
    Print(&file_contents[2]);
    
    return 0;
}
