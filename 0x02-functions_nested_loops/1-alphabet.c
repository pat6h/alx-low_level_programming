#include <stdio.h>
/**
*main - function that prints the alphabet, in lowercase
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
