/*
 * File Created: 16th June 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 16th June 2021
 * Copyright 2021@Guocheng Qian
 * File Description: multiple files
 */


// build this file by: g++ l2.7.cpp add.cpp -o l2.7 -std=c++17

#include <iostream>

// we can also define this in a header file. check l2.10
int add(int x, int y);  // define this add somewhere else. 

int main(){
    // when we say cout, we mean the cout defined in the std namespace  
    // 
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}
