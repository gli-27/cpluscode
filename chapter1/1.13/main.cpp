//
//  main.cpp
//  1.13
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int sum = 0;
    for(int val = 1; val <= 10; ++val){
        sum += val;
    }
    
    std::cout << "Sum of 1 to 10 inclusive is " << sum <<std::endl;
    
    return 0;
}
