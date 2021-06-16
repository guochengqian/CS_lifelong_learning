/*
 * File Created: 14th June 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 14th June 2021
 * Copyright 2021@Guocheng Qian
 * File Description: day 2 learncpp.com lecture 1.11
 */


// g++ -o hello.o l0.7.1.cpp -std=c++17 -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -Werror

// lesson today: 
/*
The end result is that our initial solutions often aren’t well structured, robust (error-proof), readable, or concise. 
So once your program is working, your job really isn’t done (unless the program is a one-off/throwaway). 
The next step is to cleanup your code. 
This involves things like: removing (or commenting out) temporary/debugging code, adding comments, 
handling error cases, formatting your code, and ensuring best practices are followed. 
And even then, your program may not be as simple as it could be -- perhaps there is redundant logic that can be consolidated, 
or multiple statements that can be combined, or variables that aren’t needed, or a thousand other little things that could be simplified. 
Too often new programmers focus on optimizing for performance when they should be optimizing for maintainability.
*/

#include<iostream> 
int main()
{
    // int x{};  // not good. 
    // std::cout << "input a number: ";  // not good. number is not clear. 
    std::cout << "Enter an integer: ";

    int num{};  // move the defination here. 
    std::cin >> num;

    // now double the number 
    // std::cout << "double the number: " << num*2 << std::endl; 
    std::cout << "double the number: " << num*2 << '\n'; 

    return 0; 
}