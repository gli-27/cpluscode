//
//  main.cpp
//  3.13
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
    cout << v1.size() << " ";
    for (int i = 0; i <= v1.size() and v1.empty(); ++i){
        cout << "v1 is empty";
    }
    cout << endl;
    
    vector<int> v2(10);
    cout << v2.size() << " ";
    for (int i = 0; i <= v2.size(); ++i){
        cout << v2[i] << " ";
    }
    cout << endl;
    
    vector<int> v3(10, 42);
    cout << v3.size() << " ";
    for (int i = 0; i <= v3.size(); ++i){
        cout << v3[i] << " ";
    }
    cout << endl;
    
    vector<int> v4{10};
    cout << v4.size() << " ";
    for (int i = 0; i <= v4.size(); ++i){
        cout << v4[i] << " ";
    }
    cout << endl;
    
    vector<int> v5{10, 42};
    cout << v5.size() << " ";
    for (int i = 0; i <= v5.size(); ++i){
        cout << v5[i] << " ";
    }
    cout << endl;
    
    vector<string> v6{10};
    cout << v6.size() << " ";
    for (int i = 0; i <= v6.size(); ++i){
        cout << v6[i] << " ";
    }
    cout << endl;
    
    vector<string> v7{10, "hi"};
    cout << v7.size() << " ";
    for (int i = 0; i <= v7.size(); ++i){
        cout << v7[i] << " ";
    }
    cout << endl;
    
    return 0;
}
