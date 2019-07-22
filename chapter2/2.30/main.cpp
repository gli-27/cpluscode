//
//  main.cpp
//  2.30
//
//  Created by LG on 2019/7/21.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    std::cout << "We use the term top-level const to indicate that the pointer itself is a const. When a pointer can point to a const object, we refer to that const as a low-level const." << std::endl;
    std::cout << "More generally, top-level const indicates that an object itself is const. Top-level const can appear in any object type, i.e., one of the built-in arithmetic types, a class type, or a pointer type. Low-level const appears in the base type of compound types such as pointers or references. Note that pointer types, unlike most other types, can have both top-level and low-level const independently." << std::endl;
    
    std::cout << "const int v2 = 0; v2 is top-level const since itself is a const int." << std::endl;
    std::cout << "int v1 = v2; v1 is a low-level const, since it point to a const int." << std::endl;
    std::cout << "int *p1 = &v1, &r1 = v1;, both p1 and r1 are low-level, since themselves are not const and what they point to is not const either." << std::endl;
    std::cout << "const int *p2 = &v2, *const p3 = &i, &r2 = v2;, p2 is a low-level pointer, since itself is not a const. But p3 is a top-level pointer since it is a const pointer point to const int." << std::endl;
    
    return 0;
}
