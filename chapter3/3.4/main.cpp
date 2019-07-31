//
//  main.cpp
//  3.4
//
//  Created by LG on 2019/7/29.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    if(str1>str2){
        cout << "str1 is larger, and its content is: " << str1 << "; str2's content is: " << str2 << endl;
    }
    else{
        cout << "str2 is larger, and its content is: " << str2 << "; str1's content is: " << str1 << endl;
    }
    
    if(str1.size() == str2.size()){
        cout << "These two strings have the same length." << endl;
    }
    else if(str1.size() - str2.size() > 0){
        cout << "str1 is longer." << endl;
    }
    else{
        cout << "str2 is longer." << endl;
    }
    
    return 0;
}
