//
//  main.cpp
//  2.20
//
//  Created by LG on 2019/7/20.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    
    std::cout << "p1 is: " << *p1 << std::endl;
    
    return 0;
}
