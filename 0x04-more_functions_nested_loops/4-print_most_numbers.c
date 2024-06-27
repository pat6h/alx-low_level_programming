#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 * from 0 to 9
 * followed by a new line.
 * Return: 0
 */
void print_most_numbers(void)
{
char start = '0';
while (start <= '9')
{
if (start != '2' && start != '4')
{
_putchar(start);
}
start++;
}
_putchar('\n');
}
