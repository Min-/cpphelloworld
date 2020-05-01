//
//  Show.h
//  cpphelloworld
//
//  Created by Min Zhang on 2020/5/1.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#ifndef Show_h
#define Show_h

template <class A> struct Show {};
template <>
struct Show<int> {
    static std::string (*show)(int);
};
std::string(*Show<int>::show)(int) = &std::to_string;

template <>
struct Show<bool> {
    static std::string show (bool);
};
std::string Show<bool>::show (bool b) {
    return b ? "true" : "false";
}


#endif /* Show_h */
