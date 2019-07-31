//
//  main.cpp
//  3.3
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
    cout << "Exercise 3.3: Explain how whitespace characters are handled in the string input operator and in the getline function." << endl;
    
    string s;
    cin >> s;
    cout << s << endl;
    cout << "program will read the standard input and store what is read from it. When it comes to a whitespace, it will discard it and just return what are before the whitespace." << endl;
    
    string line;
    cout << "Read a line." << endl;
    getline(cin, line);
    cout << "As for getline, this operator will keep whitespace and when it comes to an enter key, this will stop and return what has been read in this line." << endl;
    
    return 0;
}
