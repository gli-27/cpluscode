//
//  main.cpp
//  2.37
//
//  Created by LG on 2019/7/28.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;
    
    std::cout << "a's type is: " << typeid(a).name() << " and its value is: " << a << std::endl;
    
    std::cout << "b's type is: " << typeid(b).name() << " and its value is: " << b << std::endl;
    
    std::cout << "c's type is: " << typeid(c).name() << " and its value is: " << c << std::endl;
    
    std::cout << "d's type is: " << typeid(d).name() << " and its value is: " << d << std::endl;
    
    return 0;
}
