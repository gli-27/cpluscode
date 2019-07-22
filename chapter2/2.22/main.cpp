//
//  main.cpp
//  2.22
//
//  Created by LG on 2019/7/20.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int i = 0;
    int *p = &i;
    if (p){
        std::cout << "p is True, and its content is:" << p << std::endl;
    }
    else{
        std::cout << "p is False, and its content is:" << p << std::endl;
    }
    if (*p){
        std::cout << "p is True, and its content is:" << *p << std::endl;
    }
    else{
        std::cout << "p is False, and its content is:" << *p << std::endl;
    }
    i = 1;
    *p = i;
    if (*p){
        std::cout << "Now, p is True, and its content is:" << *p << std::endl;
    }
    else{
        std::cout << "Now, p is False, and its content is:" << *p << std::endl;
    }
    
    return 0;
}
