//
//  main.cpp
//  3.12
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
    vector<vector<int>> ivec;
    cout << "This one is correct." << endl;
    
    // vector<string> svec = ivec;
    cout << "Second one is not right, since we cannot convert such vector tppy to string type vector." << endl;
    
    vector<string> svec(10, "null");
    cout << "This one is correct." << endl;
    
    return 0;
}
