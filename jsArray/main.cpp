//
//  main.cpp
//  jsArray
//
//  Created by Alexander Leon on 2/23/19.
//  Copyright © 2019 Alexander Leon. All rights reserved.
//

#include <iostream>
#include "jsArray.hpp"
#include <stdexcept>
#include <vector>

int main(int argc, const char * argv[]) {
    
    js::Array<int> myArray;
    
    myArray.push(7);

    myArray.push(34);

    myArray.push(23);
    
    std::cout << myArray.pop() << std::endl;

    myArray.unshift(2);
    
    myArray.print();
    
    std::cout << myArray.length() << std::endl;
   
    return 0;
}
    
