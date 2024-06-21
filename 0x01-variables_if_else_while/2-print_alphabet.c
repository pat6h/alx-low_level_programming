#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line.
 * return: 0 (success)
 */
int main(void){
		
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++) {
		puchar(ch);
	}
	putchar('\n')
	
		return (0);
}
