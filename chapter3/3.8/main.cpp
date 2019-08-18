//
//  main.cpp
//  3.8
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
    int i = 0;
    string str;
    getline(cin, str);
    while(i <= str.length()){
        str[i] = 'X';
    }
    cout << str << endl;
    
    str = "";
    getline(cin, str);
    for(int i = 0; i <= str.length(); ++i){
        str[i] = 'X';
    }
    cout << str << endl;
    cout << "I will choose the first one, since it's the simplest way to do so." << endl;
    
    return 0;
}
