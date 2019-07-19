//
//  main.cpp
//  1.20
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item item1, item2;
    
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    
    return 0;
}
