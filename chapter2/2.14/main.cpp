//
//  main.cpp
//  2.14
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int i = 100, sum = 0;
    for (int i =0; i != 10; ++i){
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;
    return 0;
}
