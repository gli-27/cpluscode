//
//  main.cpp
//  2.38
//
//  Created by LG on 2019/7/28.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    std::cout << "auto key word will ignore the top-level const but keep the low-level const type. But decltype will keep whatever level const when we copy an object." << std::endl;
    
    const int ci = 42, &cj = ci;
    decltype(ci) x = 0; //x's type is const int
    auto z = ci; //z's type is int
    
    decltype(cj) y = x;   // y's type is const int&
    auto h = cj;          // h's type is int
    
    
    std::cout << "decltype operation just deduces the type of the expression, but will not calculate the value of the expression to do assignment. auto use the value of the expression to deduce the type of what is returned." << std::endl;
    
    int i = 42, *p = &i, &r = i;
    
    decltype(i) x1 = 0;       //since i is int, x1 is also int.
    auto x2 = i;              //same reason.
    
    decltype(r) y1 = i;       //since r is an int&, then y1 is also int&
    auto y2 = r;              //r is an int&, but auto will ignore the the reference, so y2 is just an int.
    
    return 0;
}
