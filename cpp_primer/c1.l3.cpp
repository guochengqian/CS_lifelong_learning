/*
 * File Created: 6th May 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 6th May 2021
 * Copyright 2021@Guocheng Qian
 * File Description: C++ Primer, chaper 1, 1.3

 * how to complie: g++ c1.l3.cpp
 */

#include <iostream>

int main(){
    // // define two input variables
    int v1=0, v2=0; 
    std::cout << "Enter two intgers to sum: " << std::endl; 
    std::cin>>v1>>v2; 

    std::cout << "The sum of " << v1 << " and " << v2 << " is: " << v1 + v2 << std::endl; 

    return 0; 
}
