//
//  main.cpp
//  2.16
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    int i = 0, &r1 = i; double d = 0, &r2 = d;
    r2 = 3.14159; //assign d to 3.14159
    r2 = r1; //assign d to the value of i, which will be 0
    i = r2; //assign the value of i to what is d.
    r1 = d; //assign i to d too.
    
    return 0;
}
