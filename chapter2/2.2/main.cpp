//
//  main.cpp
//  2.2
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    std::cout << "Use signed float for rate, since the rate of bank might be negative(seems never for mortgage but for interest. - -!)" << std::endl;
    std::cout << "Use float for both principal and payment, since they all can be decimals and the range of float is big enough to handle normal mortgage. (Probably out of what I can image, I am penniless anyway.)" << std::endl;
    return 0;
}
