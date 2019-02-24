//
//  jsArray.hpp
//  jsArray
//
//  Created by Alexander Leon on 2/23/19.
//  Copyright © 2019 Alexander Leon. All rights reserved.
//

#pragma once

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

namespace js {

template <class T>
class Array {
private:
    std::vector<T> elems;
    
public:
    int push(T const&);
    void print();
    T pop() noexcept;
    int unshift(T const&);
    int length() noexcept;
};

template <class T>
int Array<T>::push (T const& elem) {
    elems.push_back(elem);
    return static_cast<int>(elems.size());
}
    
template <class T>
int Array<T>::unshift (T const& elem) {
    elems.push_back(elem);
    std::rotate(elems.rbegin(), elems.rbegin() + 1, elems.rend());
    return static_cast<int>(elems.size());
}
    
template <class T>
int Array<T>::length () noexcept {
    return static_cast<int>(elems.size());
}
    
template <class T>
T Array<T>::pop () noexcept {
    T lastElement = elems[elems.size() - 1];
    elems.pop_back();
    return lastElement;
}
    
template <class T>
void Array<T>::print () {
    std::string textToPrint = "[";
    for (typename std::vector<T>::iterator it = elems.begin(); it != elems.end(); it ++) {
        if (it != elems.begin()) {
            textToPrint += ", ";
        }
        textToPrint += std::to_string(* it);
    }
    textToPrint += "]";
    std::cout << textToPrint << std::endl;
}

}

