//
//  main.cpp
//  1.9
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int var = 50, sum=0;
    
    while(var <= 100){
        sum += var;
        var ++;
    }
    std::cout << "sum = " << sum << std::endl;
    
    return 0;
}
