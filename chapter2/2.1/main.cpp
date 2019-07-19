//
//  main.cpp
//  2.1
//
//  Created by LG on 2019/7/19.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    std::cout << "***Type*** | ***Size*** | ***Range***" << std::endl;
    std::cout << "   void          0             - " << std::endl;
    std::cout << "   bool          1         True/False  " << std::endl;
    std::cout << "   short         2        -32768~32767" << std::endl;
    std::cout << "unsigned short   2          0~65535" << std::endl;
    std::cout << "   int           4   -2147483648~2147483647" << std::endl;
    std::cout << " unsigned int    4        0~4294967295" << std::endl;
    std::cout << "   long          4   -2147483648~2147483647" << std::endl;
    std::cout << "unsigned long    4        0~4294967295" << std::endl;
    std::cout << " long long       8    0~18446744073709552000" << std::endl;
    std::cout << "   char          1          -128~127" << std::endl;
    std::cout << "unsigned char    1           0~255" << std::endl;
    std::cout << "   float         4     -3.4E-38~3.4E+38" << std::endl;
    std::cout << "   double        8     1.7E-308~1.7E+308" << std::endl;
    return 0;
}
