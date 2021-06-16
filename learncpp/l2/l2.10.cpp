// Order your #includes as follows: your own user-defined headers first, 
// then 3rd party library headers, then standard library headers, 
// with the headers in each section sorted alphabetically.

#include "add.h"
// Use double quotes to include header files that you’ve written 
// or are expected to be found in the current directory. 
// Use angled brackets to include headers that come with your compiler, 
// OS, or third-party libraries you’ve installed elsewhere on your system.



#include <iostream>
// Why doesn’t iostream have a .h extension?
// The answer is that iostream.h is a different header file than iostream!. 
// history: check here: https://www.learncpp.com/cpp-tutorial/header-files/



int main(){
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}


// When printing information for debugging purposes, use std::cerr instead of std::cout. One reason for this is that std::cout may be buffered, which means there may be a pause between when you ask std::cout to output information and when it actually does. If you output using std::cout and then your program crashes immediately afterward, std::cout may or may not have actually output yet. This can mislead you about where the issue is. On the other hand, std::cerr is unbuffered, which means anything you send to it will output immediately. This helps ensure all debug output appears as soon as possible (at the cost of some performance, which we usually don’t care about when debugging).
// https://www.learncpp.com/cpp-tutorial/basic-debugging-tactics/