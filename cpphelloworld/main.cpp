//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include "pch.h"

template <typename T>
class Maybe
{
private:
    int m_default = 0;
    
public:
    T Just;
    bool Nothing;
    
    Maybe()
    : Nothing(true), Just(m_default){
        #ifdef NOT_DEBUG
            std::cout << "create Nothing" << std::endl;
        #endif
    };
    
    Maybe(T real)
    : Just(real), Nothing(false){};
    
    void Show(){
        if (Nothing){
            std::cout << "Nothing" << std::endl;
        } else {
            std::cout << "Just " << Just << std::endl;
        }
    }
    
    bool isJust(){
        if (Nothing)
            return false;
        else
            return true;
    }
    
    bool isNothing(){
        return !isJust();
    }
    
    T fromJust(){
        if (Nothing){
            throw std::invalid_argument("receive Nothing to call fromJust.");
        } else {
            return Just;
        }
    }
        
};

bool odd(int a){
    return a%2 != 0;
}

//typedef bool(*int2bool)(int);
template <typename TypeA, typename TypeB>
TypeB maybe(TypeB defvalue, TypeB(*func)(TypeA), Maybe<TypeA> maybeValue){
    if (maybeValue.isNothing())
        return defvalue;
    else {
        return func(maybeValue.fromJust());
    }
}

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

int main()
{
    Maybe<int> a;
    a.Show();
    
    Maybe<int> b(4);
    b.Show();
    
    Maybe<int>res = MaybeDivide(5, 5);
    res.Show();
    
    Maybe<int>res2 = MaybeDivide(5, 0);
    res2.Show();
    std::cout << res2.isJust() << std::endl;
    std::cout << res2.isNothing() << std::endl;
    
    std::vector<int> emptyvec;
    Maybe<int>out = SafeHead(emptyvec);
    if (out.isNothing()){
        std::cout << "this is an empty vector" << std::endl;
        out.Show();
    }
    //std::cout << *emptyvec.begin() << std::endl; // not safe
    //std::cout << "fromJust: " << out.fromJust() << std::endl;
    
    
    std::vector<int> vec({3,4});
    Maybe<int>out2 = SafeHead(vec);
    out2.Show();
    
    std::cout << "fromJust: " << out2.fromJust() << std::endl;
    
    std::cout << "is odd: " << odd(3) << std::endl;
    std::cout << "calculate maybe: " << maybe(false, odd, out2) << std::endl;
    std::cout << "calculate maybe: " << maybe(false, odd, out) << std::endl;
    
    return 0;
}
