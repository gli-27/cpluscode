//
//  main.cpp
//  2.19
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    std::cout << "Pointer is an object but reference is only an alias." << std::endl;
    std::cout << "Pointer does not need to be initialized first but reference." << std::endl;
    std::cout << "Pointer can change its pointed object but reference can only bind to what is initialized with it." << std::endl;
    std::cout << "Pointer can be const but reference cannot." << std::endl;
    std::cout << "Pointer can point to null but reference cannot refer to null." << std::endl;
    
    return 0;
}
