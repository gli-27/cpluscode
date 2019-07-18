//
//  main.cpp
//  1.6
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

/*
 
 std::cout << "The sum of " << v1;
 << " and " << v2;
 << " is " << v1 + v2 << std::endl;
 
 which is not right, the right version of the code above is like this:
*/

int main(int argc, const char * argv[]) {
    int v1=0, v2=0;
    
    std::cin >> v1;
    std::cin >> v2;
    
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    
    return 0;
}
