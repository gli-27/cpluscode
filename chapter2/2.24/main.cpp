//
//  main.cpp
//  2.24
//
//  Created by LG on 2019/7/21.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int i = 42;
    void *p = &i;
    long *lp = &i;
    std::cout << "*p is valid since its type is void, which can point to object of any type." << std::endl;
    std::cout << "*lp is not valid since it's a long type pointer so that can only point to object of long type." << std::endl;
    
    return 0;
}
