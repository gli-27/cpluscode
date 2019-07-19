//
//  main.cpp
//  2.5
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    std::cout << "'a' is char type." << std::endl;
    std::cout << "L'a' is wchar_t type, with a 'L' in front of it， which means wide character, on different platform this type will have different byte, and this can represent what can not be represent by simple char." << std::endl;
    std::cout << "\"a\" is a string type, which actually following a \\n at the end of the string vector." << std::endl;
    std::cout << "L\"a\" is also a wchar_t type." << std::endl;
    
    std::cout << "10 is int type." << std::endl;
    std::cout << "10u is an unsigned int type" << std::endl;
    std::cout << "10L is long double type" << std::endl;
    std::cout << "10uL is unsigned long double type" << std::endl;
    std::cout << "012 is octal int type" << std::endl;
    std::cout << "0xC is a hexadecimal int type" << std::endl;
    
    std::cout << "3.14 is double type" << std::endl;
    std::cout << "3.14f is float type" << std::endl;
    std::cout << "3.14L is long double type" << std::endl;
    
    std::cout << "10 is int type" << std::endl;
    std::cout << "10u is unsigned int type" << std::endl;
    std::cout << "10. is double type" << std::endl;
    std::cout << "10e-2 is also double type" << std::endl;
    
    return 0;
}
