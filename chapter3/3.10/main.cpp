//
//  main.cpp
//  3.10
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
    string str;
    getline(cin, str);
    for(auto c:str){
        if(!ispunct(c)){
            cout << c;
        }
    }
    cout << endl;
    
    return 0;
}
