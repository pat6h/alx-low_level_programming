#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size:size parameter of triangle
 * return: always 0
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar(' ');
}
for (k = 1; k <= 2 * i - 1; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
