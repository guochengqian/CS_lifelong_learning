/*
 * File Created: 2nd April 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 9th April 2021
 * Copyright 2021@Guocheng Qian
 * 
 * lecture 1: introduction to C. 
1. printf function (has return values)
2. how to run: gcc l1.1.c -o l1.1.out
3. ./l1.1.out
4. reference: https://en.cppreference.com/

 */

// #include <stdio.h>

// int main(){
// 	int n;
// 	while (scanf("%d", &n) != EOF){ // EOF means the exit   
// 		// int = printf, print returns the length of the string.  
// 		printf("  has %d digits \n", printf("%d", n)); 

// 		// printf("  has %d digits \n  ", printf("%d", n)); 
// 		// why not correct? there should be no space after \n
// 	}

// 	// return 0 is important. 
// 	return 0; 
// }


// g++ -o hello.o l0.7.1.cpp -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -Werror
// 1. disable complier extensions:  https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-compiler-extensions/
// You can disable compiler extensions by adding the -pedantic-errors flag to the compile command line.

// 2. increaset warning levels : https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-warning-and-error-levels/
// 3. treat warnings as erros: 

#include <iostream>
 
int main()
{
	// std::cout << "Hello, world!" << std::endl;
	std::cout << "Hello, world!\n";
	// Prefer ‘\n’ over std::endl when outputting text to the console.
	// The only difference is that std::endl flushes the output buffer, and '\n' doesn't. If you don't want the buffer flushed frequently, use '\n'. If you do (for example, if you want to get all the output, and the program is unstable), use std::endl.

	// int x{}; // zero intilization, must use braces to intilization without value
	int x; // different from the int x{}; this int x do not intilize the x, only define. a random value pointed to the allocated memory.
	std::cout << "x before initlization is : " << x<< "\n"; 

	std::cin >> x; 
	std::cout << "the input number is : " << x<< "\n"; 
	return 0;


}

