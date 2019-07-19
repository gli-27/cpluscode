//
//  main.cpp
//  2.10
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

std::string global_str;
int global_int;

int main (){
    int local_int;
    std::string local_str;
    
    std::cout << global_str << global_int << std::endl;
    std::cout << local_int << local_str << std::endl;
    
    return 0;
}
