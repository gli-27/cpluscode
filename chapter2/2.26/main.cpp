//
//  main.cpp
//  2.26
//
//  Created by LG on 2019/7/21.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    //const int buf;
    std::cout << "const int buf; is illegal, since const object must initialized at run time." << std::endl;
    int cnt = 0;
    const int sz = cnt;
    ++cnt;
    //++sz;
    std::cout << "++sz; is illegal since const object cannot change." << std::endl;
    
    return 0;
}
