//
//  main.cpp
//  1.15
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    // error: missing ) in parameter list for main
    int main1 ( {
        // error: used colon, not a semicolon, after endl
        std::cout << "Read each file." << std::endl:
        // error: missing quotes around string literal
        std::cout << Update master. << std::endl;
        // error: second output operator is missing
        std::cout << "Write new master." std::endl;
        // error: missing ; on return statement
        return 0
    }
       int main2(){
           int v1 = 0, v2 = 0;
           // error: uses "v" not "v1"
           std::cin >> v >> v2;
           // error: cout not defined; should be std::cout
           cout << v1 + v2 << std::endl; return 0;
       }
    
    return 0;
}
