//
//  main.cpp
//  1.25
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item total;
    if (std::cin >> total){
        Sales_item trans;
        while (std::cin >> trans){
            if (total.isbn() == trans.isbn()){
                total += trans;
            }
            else{
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else{
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
