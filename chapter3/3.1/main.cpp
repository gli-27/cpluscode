//
//  main.cpp
//  3.1
//
//  Created by LG on 2019/7/28.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main(){
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        ++val;
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    return 0;
}

int exercise_2_6_2(){
    Sales_item data1, data2;
    double price = 0;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    
    if (data1.bookNo == data2.bookNo){
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
        if (totalCnt != 0){
            cout << totalRevenue/totalCnt << endl;
        }
        else{
            cout << "(no sales)" << endl;
        }
        return 0;
    }
    else{
        cerr << "Data must refer to the same ISBN" << endl;
        return -1;
    }
}
