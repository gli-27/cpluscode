//
//  main.cpp
//  2.6
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int month = 9, day = 7;
    // both of them are decimal and valid integers.
    std::cout << month << day << std::endl;
    
    //int month = 09, day = 07;
    //Both of them are octal integers, but month is illegal since in octal system, there are no numbers bigger than 8.
    std::cout << "int month = 09, day = 07;" << std::endl;
    std::cout << "Both of them are octal integers, but month is illegal since in octal system, there are no numbers bigger than 8." << std::endl;
    
    return 0;
}
