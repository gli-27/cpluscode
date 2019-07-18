//
//  main.cpp
//  1.5
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int var1=0, var2=0;
    std::cin >> var1;
    std::cin >> var2;
    
    std::cout << "The sum of ";
    std::cout << var1;
    std::cout << " and ";
    std::cout << var2;
    std::cout << " is ";
    std::cout << var1 + var2 << std::endl;
    return 0;
}
