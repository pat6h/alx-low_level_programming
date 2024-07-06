#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string containing the bytes to search for
 *
 * Return: A pointer to the byte in `s` that bytes in `accept`,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *tmp = accept;
while (*tmp != '\0')
{
if (*s == *tmp)
{
return (s);
}
tmp++;
}
s++;
}
return (NULL);
}
