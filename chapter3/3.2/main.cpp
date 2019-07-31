//
//  main.cpp
//  3.2
//
//  Created by LG on 2019/7/28.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main(){
    string line;
    cout << "Read a line." << endl;
    getline(cin, line);
    cout << line << endl;
    
    string word;
    cout << "Read a word." << endl;
    cin >> word;
    cout << word << endl;
    
    return 0;
}
