#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: the value to fill the memory with
 * @n: the number of bytes to fill
 *
 * Return: A pointer to the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
