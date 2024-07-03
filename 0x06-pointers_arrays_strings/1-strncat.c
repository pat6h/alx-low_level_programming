#include "main.h"

/**
 *_strncat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *@n: value
 * Return: returns poiner to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
while (*p != '\0')
{
p++;
}
while (*src != '\0' && n > 0)
{
*p = *src;
p++;
src++;
n--;
}
if (n > 0)
{
*p = '\0';
}
return (dest);
}
