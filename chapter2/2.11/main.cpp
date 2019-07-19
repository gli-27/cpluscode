//
//  main.cpp
//  2.11
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    extern int ix = 1024;
    //definition, because it assign a value to the variable.
    int iy;
    //definition, not using extern in front of it.
    extern int iz;
    //declaration, since there is extern without init.
    
    return 0;
}
