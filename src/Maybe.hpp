//
//  Map.hpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/4/30.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#ifndef Maybe_hpp
#define Maybe_hpp

#include <stdio.h>

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
    }
    
    Maybe(T real)
        : Just(real), Nothing(false){};

        
    void show();
    bool isJust();
    bool isNothing();
    T fromJust();
};

// check equalilty
template <typename T>
bool operator==(Maybe<T>a, Maybe<T>b)
{
    if (a.isNothing() && b.isNothing())
        return true;
    else if (a.isNothing() || b.isNothing())
        return false;
    else if (a.fromJust() == b.fromJust())
        return true;
    else
        return false;
}

template <typename TypeA, typename TypeB>
TypeB maybe(TypeB defvalue, TypeB(*func)(TypeA), Maybe<TypeA> maybeValue){
    if (maybeValue.isNothing())
        return defvalue;
    else {
        return func(maybeValue.fromJust());
    }
}


#endif /* Map_hpp */
