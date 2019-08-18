//
//  main.cpp
//  3.11
//
//  Created by LG on 2019/8/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    const string s = "Keep out!";
    for (auto &c : s){
        cout << c;
        cout << typeid(c).name() << endl;
    }
    
    return 0;
}
