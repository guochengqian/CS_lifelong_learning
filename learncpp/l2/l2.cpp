/*
 * File Created: 16th June 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 16th June 2021
 * Copyright 2021@Guocheng Qian
 * File Description: 
 * Follow the DRY best practice: “don’t repeat yourself”. 
 */

#include <iostream>

// /**
//  * @brief functions: https://www.learncpp.com/cpp-tutorial/function-return-values/
//  *  why this function is not good? repeat your self!
//  * @return int 
//  */
// int main()
// {
// 	int x{};
// 	std::cout << "Enter an integer: ";
// 	std::cin >> x; 
 
// 	int y{};
// 	std::cout << "Enter an integer: ";
// 	std::cin >> y; 
    
// 	std::cout << x << " + " << y << " = " << x + y << '\n';
 
// 	return 0;
// }


int getValueFromUser(){
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num; 
    return num; 
}

int main(){
    // 要习惯于这种写法。int y{xxx} 用xxx直接给y赋值。 
    int x{ getValueFromUser() };  // first call to getValueFromUser. 
    int y{ getValueFromUser() }; 

    std::cout << x << " + " << y << " = " << x+y << '\n'; 
    return 0;
}
