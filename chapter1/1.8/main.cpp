//
//  main.cpp
//  1.8
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    std::cout << "/*";
    std::cout << "*/";
    //std::cout << /* "*/" */; This is illegal, since the "" is commented.
    //std::cout << /* "*/" /* "/*" */; Which is also illegal, same reason as above.
    
    return 0;
}
