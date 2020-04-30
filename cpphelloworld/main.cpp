//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include "pch.h"
#include "Maybe.hpp"
#include "classHeader.hpp"


Maybe<int> MaybeDivide(int a, int b){
    if (b != 0){
        return Maybe<int>(a/b);
    } else {
        return Maybe<int>();
    }
}

Maybe<int> SafeHead(const std::vector<int> &vec){
    if (vec.size() == 0){
        return Maybe<int>();
    } else
        return Maybe<int>(*vec.begin());
}

bool odd(int a){
    return a%2 != 0;
}

int main(){
   Maybe<int> a;
   a.show();
   
   Maybe<int> b(4);
   b.show();
   
   Maybe<int>res = MaybeDivide(5, 5);
   res.show();
   
   Maybe<int>res2 = MaybeDivide(5, 0);
   res2.show();
   std::cout << res2.isJust() << std::endl;
   std::cout << res2.isNothing() << std::endl;
   
   std::vector<int> emptyvec;
   Maybe<int>out = SafeHead(emptyvec);
   if (out.isNothing()){
       std::cout << "this is an empty vector" << std::endl;
       out.show();
   }
   //std::cout << *emptyvec.begin() << std::endl; // not safe
   //std::cout << "fromJust: " << out.fromJust() << std::endl;
   
   
   std::vector<int> vec({3,4});
   Maybe<int>out2 = SafeHead(vec);
   out2.show();
   
   std::cout << "fromJust: " << out2.fromJust() << std::endl;
   
   std::cout << "is odd: " << odd(3) << std::endl;
   std::cout << "calculate maybe: " << maybe(false, odd, out2) << std::endl;
   std::cout << "calculate maybe: " << maybe(false, odd, out) << std::endl;
   
   
   //test equality
   bool eq = out == out2;
   std::cout << eq << std::endl;
   std::cout << (out == out2) << std::endl;
   std::cout << (true == true) << std::endl;
   std::cout << (out == a) << std::endl;
   std::cout << (b == out2) << std::endl;

    return 0;
}


