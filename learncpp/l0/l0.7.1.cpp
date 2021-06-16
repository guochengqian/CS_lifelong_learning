/*
 * File Created: 2nd April 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 9th April 2021
 * Copyright 2021@Guocheng Qian
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


#include <iostream>
// 1. learn how to use visual studio code: https://code.visualstudio.com/docs/cpp/introvideos-cpp
// 若出现无法使用extension, 则往往是冲突导致，删掉所有其他extension，重启 visual studio code. 

// g++ -o hello.o l0.7.1.cpp -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -Werror
// i have add the args into the defaul configuration in vscode. check this video: https://www.youtube.com/watch?v=w6PnOlmop9Y&ab_channel=VisualStudioCode
// 1. disable complier extensions:  https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-compiler-extensions/
// You can disable compiler extensions by adding the -pedantic-errors flag to the compile command line.
// 2. increaset warning levels : https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-warning-and-error-levels/
// 3. treat warnings as erros:
// Lines should not be too long. Typically, 80 characters is the maximum length a line should be


/**
 * @brief The first exercise for c++ programming. iostream 
 * 
 * @return None 
 */
int main()
{	
	// std::cout << "Hello, world!" << std::endl;
	std::cout << "Hello, world!\n";
	// Prefer ‘\n’ over std::endl when outputting text to the console.
	// The only difference is that std::endl flushes the output buffer, and '\n' doesn't. If you don't want the buffer flushed frequently, use '\n'. If you do (for example, if you want to get all the output, and the program is unstable), use std::endl.

	// int x{}; // zero intilization, must use braces to intilization without value
	// int x; // different from the int x{}; this int x do not intilize the x, only define. a random value pointed to the allocated memory.
	// if do not add wError. this will run. 
	// if add -wError, error. because the x is not intilized. 
	// std::cout << "x before initlization is : " << x << "\n";

	// below can only be run at > c++17 
	int num{}; // zero intilization, must use braces to intilization without value
	std::cout << "num after zero initlization is : " << num << "\n";

	std::cout << "Enter an integet: "; 
	std::cin >> num;
	std::cout << "the input number is : " << num << "\n";
	return 0;
}
