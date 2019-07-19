//
//  main.cpp
//  2.18
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int i = 10, *p = &i;
    std::cout << *p << std::endl;
    int k = 20;
    p = &k;
    std::cout << *p << std::endl;
    
    return 0;
}
