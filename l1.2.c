/*
lecture 1: introduction to C. 
1. scanf function (use with getchar())
2. output redirect : ./a.out > out  (the output in the terminal will be saved to out)

*/

#include <stdio.h>

int main(){
	char str[100] = {0};
	int ret = 0; 
	// != -1 , equals to != EOF (End Of File, end of input, Ctrl-d)

	// [ ] is the 字符集, for defining the recoginizable str character. [^\n], will neglect \n
	while ((ret = scanf("%[^\n]s", str)) != -1) {
		// why add return value ret? easy for debug...
		getchar(); // Reads the next character from stdin. (delete the first char from the stream)
		// printf("%s ret = %d \n", str, ret);
		printf(" has %d digits \n", printf("%s", str));
	}
}
