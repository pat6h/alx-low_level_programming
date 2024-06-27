#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * followed by a new line.
 * Return: 0
 */
void print_numbers(void)
{
char start = '0';
char end = '9';
while (start <= end)
{
_putchar(start);
start++;
}
_putchar('\n');
}
