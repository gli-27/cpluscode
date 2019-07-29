//
//  main.cpp
//  2.41
//
//  Created by LG on 2019/7/28.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

struct Sales_item{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double transaction = 0.0;
};

void exercise_1_5_1(){
    std::cout << "Exercise 1.5.1." << std::endl;
    Sales_item book;
    std::cin >> book.bookNo;
    std::cout << book.bookNo << std::endl;
}

void exercise_1_5_2(){
    std::cout << "Exercise 1.5.2." << std::endl;
    Sales_item item1, item2;
    std::cin >> item1.bookNo >> item1.units_sold >> item1.revenue;
    std::cin >> item2.bookNo >> item2.units_sold >> item2.revenue;
    if (item1.bookNo == item2.bookNo){
        std::cout << item1.units_sold*item1.revenue + item2.units_sold*item2.revenue << std::endl;
    }
    else{
        std::cout << "Data must refer to same ISBN" << std::endl;
    }
}

void exercise_1_5_3(){
    std::cout << "Exercise 1.5.3." << std::endl;
    Sales_item total;
    total.transaction = total.units_sold*total.revenue;
    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_item trans;
        while(std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
            if(total.bookNo == trans.bookNo){
                total.transaction += trans.units_sold*trans.revenue;
            }
            else{
                std::cout << total.bookNo << total.units_sold << total.revenue << std::endl;
                total = trans;
                total.transaction = total.units_sold*total.revenue;
            }
        }
    }
    else{
        std::cerr << "No data?" << std::endl;
    }
}

int main(){
    exercise_1_5_1();
    exercise_1_5_2();
    exercise_1_5_3();

    return 0;
}
