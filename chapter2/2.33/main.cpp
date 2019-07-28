//
//  main.cpp
//  2.33
//
//  Created by LG on 2019/7/27.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)
    const int ci = i, &cr = ci;
    auto b = ci; // b is an int (top-level const in ci is dropped)
    auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i; // d is an int*(& ofan int objectis int*)
    auto e = &ci; // e is const int*(& of a const object is low-level const)
    const auto f = ci; // deduced type of ci is int; f has type const int
    auto &g = ci; // g is a const int& that is bound to ci
    //auto &h = 42;
    // error: we can't bind a plain reference to a literal
    const auto &j = 42; // ok: we can bind a const reference to a literal
    auto k = ci, &l = i; // k is int; l is int&
    auto &m = ci,*p = &ci;// m isa const int&; p is a pointer to const int
    // error: type deduced from i is int; type deduced from &ci is const int
    //auto &n = i, *p2 = &ci;
    
    std::cout << "a = 42; //Correct since a is an int, then we can assign value like this." << std::endl;
    
    std::cout << "b = 42; //Correct, since b is also an int." << std::endl;
    
    std::cout << "c = 42; //Correct, since c is int type." << std::endl;
    
    std::cout << "d = 42; //Error, since d is an int*, we can not assign value like this." << std::endl;
    
    std::cout << "e = 42; //Error, since e is a const int*, cannot assign value like this." << std::endl;
    
    std::cout << "g = 42; //Error, since g is a const int&." << std::endl;
    
    return 0;
}
