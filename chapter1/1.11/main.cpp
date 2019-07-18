//
//  main.cpp
//  1.11
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int var1, var2, temp;
    
    std::cout << "Please input two integer number:" << std::endl;
    std::cin >> var1;
    std::cin >> var2;
    
    if(var1 >= var2){
        temp = var2;
        while(temp<=var1){
            std::cout << temp << std::endl;
            temp ++;
        }
    }
    else{
        temp = var1;
        while(temp <= var2){
            std::cout << temp << std::endl;
            temp ++;
        }
    }
    
    return 0;
}
