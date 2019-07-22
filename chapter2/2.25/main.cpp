//
//  main.cpp
//  2.25
//
//  Created by LG on 2019/7/21.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int problem_a(){
    std::cout << "prblem (a)" << std::endl;
    int* ip, &r = *ip;
    std::cout << "Type of ip is: " << typeid(ip).name() << std::endl;
    std::cout << "Type of r is: " << typeid(r).name() << std::endl;

    return 0;
}

int problem_b(){
    std::cout << "prblem (b)" << std::endl;
    int i, *ip = 0;
    std::cout << "Type of i is: " << typeid(i).name() << std::endl;
    std::cout << "Type of ip is: " << typeid(ip).name() << std::endl;

    return 0;
}

int problem_c(){
    std::cout << "prblem (c)" << std::endl;
    int* ip, ip2;
    std::cout << "Type of ip is: " << typeid(ip).name() << std::endl;
    std::cout << "Type of ip2 is: " << typeid(ip2).name() << std::endl;
    
    return 0;
}

int main(){
    problem_a();
    problem_b();
    problem_c();
    
    return 0;
}
