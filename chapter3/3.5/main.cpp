//
//  main.cpp
//  3.5
//
//  Created by LG on 2019/8/2.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string largetStr = "", str = "";
    while(true){
        getline(cin, str);
        if (str.empty()){
            break;
        }
        else{
            largetStr += str;
        }
    }
    cout << largetStr << endl;
    
    // Separate adjacent input string
    largetStr = "";
    getline(cin, largetStr);
    int j = 0;
    str = "";
    for(int i = 0; i <= largetStr.length(); ++i){
        if(isspace(largetStr[i]) or i == largetStr.length()){
            str = largetStr.substr(j, i);
            cout << str << endl;
            str = "";
            j = i + 1;
        }
        else{
            continue;
        }
    }
    return 0;
}
