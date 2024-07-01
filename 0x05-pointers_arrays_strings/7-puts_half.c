#include "main.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str : value
 * return: 0
 */
void puts_half(char *str)
{
int len = 0, i, half;
while (str[len] != '\0')
{
len++;
}
half = len / 2;
if (len % 2 != 0)
{
half++;
}
for (i = half; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
