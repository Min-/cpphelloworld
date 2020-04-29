//
//  classHeader.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/4/29.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include "classHeader.hpp"



A2DD::A2DD(int x,int y)
{
  gx = x;
  gy = y;
}

int A2DD::getSum()
{
  return gx + gy;
}

template <typename T>
int Maybe<T>::Add2(){
    return 12;
}

template <typename T>
int Maybe<T>::Add3(){
    return 14;
}

template class Maybe<int>;
template class Maybe<bool>;
