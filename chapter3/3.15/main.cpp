//
//  main.cpp
//  3.15
//
//  Created by LG on 2019/8/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    vector<string> strlist;
    string str;
    while (cin >> str) {
        strlist.push_back(str);
    }
    
    cout << strlist.size() << endl;
    for (int i = 0; i <= strlist.size(); ++i){
        cout << strlist[i] << endl;
    }
    
    return 0;
}
