#include <stdio.h>
/**
 *  main - program that prints _putchar,
 * followed by a new line.
 */
int main(){
  char name[] = "_putchar\n";
    int a = 0;
  do
  {
    putchar(name[a]);
    a++;
  } while (name[a] != '\0');
  return 0;
}
