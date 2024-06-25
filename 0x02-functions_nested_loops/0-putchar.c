#include "main.h"
/**
 * main - program that prints _putchar,
 * Return: Always 0 (Success)
 */
int main(void)
{
char name[] = "_putchar\n";
int a = 0;
do {
_putchar(name[a]);
a++;
} while (name[a] != '\0');
return (0);
}
