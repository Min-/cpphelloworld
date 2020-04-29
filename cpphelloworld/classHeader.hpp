//
//  classHeader.hpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/4/29.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#ifndef classHeader_hpp
#define classHeader_hpp

#include <stdio.h>

class A2DD
{
  private:
  int gx;
  int gy;

  public:
  A2DD(int x,int y);
  int getSum();
};

template <typename T>
class Maybe
{
private:
    int m_default;
 
public:
    Maybe(T x){
        m_default = x;
    }
    
    int Add2();
};


#include "templateClass.hpp"
#endif /* classHeader_hpp */
