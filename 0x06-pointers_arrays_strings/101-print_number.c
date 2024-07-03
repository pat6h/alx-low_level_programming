#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: nothing (void)
 */
void print_number(int n) {
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
do
{
_putchar(num % 10 + '0');
num /= 10;
}
while (num > 0);
}
