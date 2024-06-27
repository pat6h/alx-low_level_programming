#include "main.h"

/**
 * print_line - that draws a straight line in the terminal
 * @i:
 * followed by a new line
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
} else
{
for ( i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
