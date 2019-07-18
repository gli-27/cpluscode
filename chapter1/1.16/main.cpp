//
//  main.cpp
//  1.16
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int sum = 0, val = 0;
    
    std::cout << "please input arbitrary number of integers, partition with ' ' or enter key, ending with any other input." << std::endl;
    
    while(std::cin >> val){
        sum += val;
    }
    
    std::cout << "Sum of all input integers is:" << sum << std::endl;
    
    return 0;
}
