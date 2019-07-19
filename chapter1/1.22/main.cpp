//
//  main.cpp
//  1.22
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item sum;
    if (std::cin >> sum){
        Sales_item temp;
        while (std::cin >> temp){
            if (sum.isbn() == temp.isbn()){
                sum += temp;
            }
            else{
                std::cerr << "The ISBN you entered is not the same as begin." << std::endl;
            }
        }
        std::cout << sum << std::endl;
    }
    else{
        std::cerr << "Input error" << std::endl;
        return -1;
    }
    return 0;
}
