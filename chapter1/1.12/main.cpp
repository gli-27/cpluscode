//
//  main.cpp
//  1.12
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int sum = 0;
    for (int i = -100; i <= 100; ++i){
        sum += i;
    }
    
    std::cout << sum << std::endl;
    
    return 0;
    //This is an operation to add all integer number between -100 and 100. The final result is 0.
}
