#include <stdio.h>
/**
*main - function that prints the alphabet, in lowercase
*Return:return 0
*/
void print_alphabet(void) {
  char ch = 'a'; 
  while (ch <= 'z') {
    _putchar(ch); 
    ch++; 
  }
  _putchar('\n'); 
}
int main() {
  print_alphabet();
  return 0;
}
