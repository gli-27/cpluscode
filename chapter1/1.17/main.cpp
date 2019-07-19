//
//  main.cpp
//  1.17
//
//  Created by LG on 2019/7/18.
//  Copyright © 2019 LG. All rights reserved.
//

#include <iostream>

int main(){
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal) {
        int cnt = 1; // store the count for the current value we're processing
        while (std::cin >> val) {
        // read the remaining numbers
            if (val == currVal)
            // if the values are the same
                ++cnt; // add 1 to cnt
            else {
            // otherwise, print the count for the previous value
                std::cout << currVal << " occurs "
                << cnt << " times" << std::endl; currVal = val;// remember the new value
                cnt = 1; // reset the counter }
            } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs "
        << cnt << " times" << std::endl;
        } // outermost if statement ends here
    }
    return 0;
}
// If all input values equal, then output only the number and the times of occurrence of the number, and once you continue to input that number, the counts of occurrence will keep increase.
//If all number are no duplicated, then all number will be output with occurence only 1.
