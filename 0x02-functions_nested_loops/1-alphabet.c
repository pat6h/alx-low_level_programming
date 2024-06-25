#include <stdio.h>
/**
*print_alphabet - in lowercase
*Return 0
*/
void print_alphabet(void) {
char ch = 'a'; 
while (ch <= 'z') {
putchar(ch); 
ch++; 
}
putchar('\n'); 
}
