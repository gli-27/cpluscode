//
//  main.cpp
//  2.29
//
//  Created by LG on 2019/7/21.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){ 
    std::cout << "(a) is legal, once ic is initialized with value." << std::endl;
    std::cout << "(b) is illegal, since p3 is a const int pointer, which can not be assigned to int pointer." << std::endl;
    std::cout << "(c) is also illegal, since ic is a const int but p1 is just a int pointer." << std::endl;
    std::cout << "(d) is illegal, since p3 is a const pointer point to const int, although ic is const int, but once p3 has already been initialized, it cannot change to point to any other obejct." << std::endl;
    std::cout << "(e) is also illegal, since p2 is a const pointer point to int object, but p1 is an int pointer not an int." << std::endl;
    std::cout << "(f) is illegal, since ic is a const int, then it cannot be assigned with any other values in the following process." << std::endl;
    
    return 0;
}
