//
//  main.cpp
//  1.23
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item item1, item2;
    int count=1;
    if (std::cin >> item1){
        while(std::cin >> item2){
            if (item1.isbn() == item2.isbn()){
                count ++;
            }
            else{
                std::cout << item1 << std::endl;
                std::cout << "Count is:" << count << std::endl;
                item1 = item2;
                count = 1;
            }
        }
    }
    else{
        std::cerr << "The Sales_item enter incorrectly." << std::endl;
        return -1;
    }
    return 0;
}
