//
//  main.cpp
//  2.21
//
//  Created by LG on 2019/7/20.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int i = 0;
    //double* dp = &i; //illegal since double pointer cannot point to int.
    //int *ip = i; //illegal since pointer must point to address of object, like *ip = &i;
    int *p = &i;
    
    //std::cout << "dp is: " << *dp << std::endl;
    //std::cout << "ip is: " << *ip << std::endl;
    std::cout << "p is: " << *p << std::endl;
    
    return 0;
}
