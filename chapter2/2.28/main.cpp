//
//  main.cpp
//  2.28
//
//  Created by LG on 2019/7/21.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    //int i, *const cp;
    std::cout << "int i, *const cp; is illegal, since const object need an intializer." << std::endl;
    
    //int *p1, *const p2;
    std::cout << "int *p1, *const p2; is illegal either, since const object need an initializer." << std::endl;
    
    //const int ic, &r = ic;
    std::cout << "const int ic, &r = ic; is also illegel, since const object need an initializer." << std::endl;
    
    //const int *const p3;
    std::cout << "const int *const p3; is also illegal, same reason as above." << std::endl;
    
    const int *p;
    std::cout << "const int *p; is legal, since this is const pointer and pointer can point to null or 0 cause it is an int type." << std::endl;
    
    return 0;
}
