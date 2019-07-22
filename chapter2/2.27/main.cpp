//
//  main.cpp
//  2.27
//
//  Created by LG on 2019/7/21.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    //int i = -1, &r = 0;
    std::cout << "int i = -1, &r = 0; is illegal, since &r reference type cannot assign to a temporary object." << std::endl;
    
    int i2 = 0;
    int *const p2 = &i2;
    std::cout << "int *const p2 = &i2; is legal once i2 is initialized as an int type" << std::endl;
    
    const int i = -1, &r = 0;
    std::cout << "const int i = -1, &r = 0; is legal" << std::endl;
    
    const int *const p3 = &i2;
    std::cout << "const int *const p3 = &i2; is legal" << std::endl;
    
    const int *p1 = &i2;
    std::cout << "const int *p1 = &i2; is legal once i2 is initialized as int." << std::endl;
    
    //const int &const r2;
    std::cout << "const int &const r2; is illegal, since const reference need an initializer." << std::endl;
    
    //const int i2 = i, &r = i;
    std::cout << "const int i2 = i, &r = i; is legal once those variables are not redefined with what have been shown up above." << std::endl;
    
    return 0;
}
