//
//  main.cpp
//  3.14
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
    vector<int> v1;
    int temp;
    while (cin >> temp) {
        v1.push_back(temp);
    }
    
    cout << v1.size() << endl;
    for (int i = 0; i <= v1.size(); ++i){
        cout << v1[i] << endl;
    }
    cout << endl;
    
    return 0;
}
