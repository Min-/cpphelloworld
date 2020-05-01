//
//  Comparable.h
//  cpphelloworld
//
//  Created by Min Zhang on 2020/5/1.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#ifndef Comparable_h
#define Comparable_h

#include "Show.h"

enum class Compare{
    eq, gt, ls, na
};

template<>
struct Show<Compare>{
    static std::string show (Compare);
};
std::string Show<Compare>::show (Compare a){
    if (a == Compare::eq){
        return "eq";
    } else if (a == Compare::gt){
        return "gt";
    } else if (a == Compare::ls){
        return "ls";
    } else
        return "na";
}

//class Comparable{
//public:
//    virtual bool equal(){
//        std::cout << "comparable base class" << std::endl;
//        return 0;
//    };
//
//    virtual Compare compare(){return Compare::na;};
//};

template <class A> struct Comparable{};
template <>
struct Comparable<int>{
    static Compare compare (int, int);
};
Compare Comparable<int>::compare (int a, int b){
    if (a > b){
        return Compare::gt;
    } else if (a < b){
        return Compare::ls;
    } else if (a == b){
        return Compare::eq;
    } else
        return Compare::na;
}

#endif /* Comparable_h */
