//
//  main.cpp
//  2.23
//
//  Created by LG on 2019/7/21.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int *p;
    std::cout << "Define a pointer p but not initialize it." << std::endl;
    if (*p){
        std::cout << "This pointer is valid and True and its content is: " << *p << std::endl;
    }
    else{
        std::cout << "This pointer is invalid and False and its content is: " << *p << std::endl;
    }
}
