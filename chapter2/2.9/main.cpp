//
//  main.cpp
//  2.9
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    //std::cin >> int input_value;
    std::cout << "(a) is illegal, should define integer before use std::cin" << std::endl;
    //int i = {3.14};
    std::cout << "(b) is also illegal, double cannot be assigned to a int type" << std::endl;
    //double salary = wage = 9999.99;
    std::cout << "(c) also is illegal, cannot define in this way" << std::endl;
    //int i = 3.14;
    std::cout << "(d) illegal, same reason as before" << std::endl;
    
    return 0;
}
