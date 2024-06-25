#include <stdio.h>
/**
*print_alphabet_x10 -  in lowercase
*Return:0
*/
void print_alphabet_x10(void)
{
  int i;
  putchar('a');
  for (i = 0; i < 25; i++)
  {
    putchar(putchar(i % 26) + 1);
  }
  putchar('\n');
}
