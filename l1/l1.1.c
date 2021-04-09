/*
lecture 1: introduction to C. 
1. printf function (has return values)
2. how to run: gcc l1.1.c -o l1.1.out
3. ./l1.1.out
4. reference: https://en.cppreference.com/w/

*/

#include <stdio.h>

int main(){
	int n;
	while (scanf("%d", &n) != EOF){ // EOF means the exit   
		// int = printf, print returns the length of the string.  
		printf("  has %d digits \n", printf("%d", n)); 
	}
	return 0;
}

