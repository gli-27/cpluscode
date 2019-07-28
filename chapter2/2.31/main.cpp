//
//  main.cpp
//  2.31
//
//  Created by LG on 2019/7/21.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    std::cout << "r1 = v2; //Correct, since v2 is a low-level const and r1 itself is low-level but nonconst. However we can convert a nonconst into const." << std::endl;
    
    std::cout << "p1 = p2; //Error, since p2 is not a low-level const, it's a pointer points to int. But p2 is a low-level const. They are not the same low-level qualification, then this can not be done." << std::endl;
    
    std::cout << "p2 = p1; //Correct, although they are not the same low-level qualification, but when we copy an object, we can ignore the top-level const type." << std::endl;
    
    std::cout << "p1 = p3; //Error, since p1 is a int * but p3 is a const int *const, they do not share the same low-level const qualification." << std::endl;
    
    std::cout << "p2 = p3; //Correct, since both p2 and p3 are low-level const qualification." << std::endl;
    
    return 0;
}
