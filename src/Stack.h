//
//  Stack.h
//  cpphelloworld
//
//  Created by Min Zhang on 2020/4/30.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>

template <typename T>
class Stack{
private:
    T* m_arr;
    int m_init_size = 100;
    int m_count = 0;
    T m_bottom = 0;
    
public:
    Stack<T>(){
        m_arr = new T [m_init_size];
    };
    
    Stack<T>(int size){
        m_arr = new T [size];
    };
    
    bool empty(){
        std::cout << "check empty" << std::endl;
        if(m_count == 0)
            return true;
        else
            return false;
    };
    
    T peek(){
        if(m_count == 0){
            std::cout << "Error: this is an empty stack. Nothing to peek. It will return: " << m_bottom << std::endl;
            return m_bottom;
        } else {
            std::cout << "peek: " << m_arr[m_count-1] << std::endl;
            return m_arr[m_count-1];
        }
    };
    
    T pop(){
        if(m_count == 0){
            std::cout << "Error: this is an empty stack. Nothing to pop. It will return: " << m_bottom << std::endl;
            return 0;
        } else {
            std::cout << "pop: " << m_arr[(m_count--)-1] << std::endl;
            return m_arr[m_count-1];
        }
    };
    
    T push(T item){
        std::cout << "push: " << item << " at: " << m_count << std::endl;
        m_arr[m_count] = item;
        m_count++;
        return item;
    };
    
    int search(T obj){
        if (m_count == 0){
            return -1;
        } else {
            for (int i = 0; i < m_count; i++){
                if (m_arr[i] == obj){
                    return i+1;
                } else {
                    return -1;
                }
            }
            return -1;
        }
    };
};

#endif /* Stack_h */
