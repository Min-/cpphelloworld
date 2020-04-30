//
//  Map.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/4/30.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include "Maybe.hpp"

template <typename T>
void Maybe<T>::show(){
    if (Maybe::Nothing){
        std::cout << "Nothing" << std::endl;
    } else {
        std::cout << "Just " << Just << std::endl;
    }
}

template <typename T>
bool Maybe<T>::isJust(){
    if (Nothing)
        return false;
    else
        return true;
}
    
template <typename T>
bool Maybe<T>::isNothing(){
    return !Maybe<T>::isJust();
}

// this function is not safe
template <typename T>
T Maybe<T>::fromJust(){
    if (Nothing){
        throw std::invalid_argument("receive Nothing to call fromJust.");
    } else {
        return Just;
    }
}


template class Maybe<int>;
template class Maybe<float>;
template class Maybe<double>;
template class Maybe<bool>;
template class Maybe<char>;

