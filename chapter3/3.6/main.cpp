//
//  main.cpp
//  3.6
//
//  Created by LG on 2019/8/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    string str = "";
    getline(cin, str);
    for (auto &c : str){
        c = 'X';
    }
    cout << str << endl;
}
