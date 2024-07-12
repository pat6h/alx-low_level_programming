#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string containing the accepted characters
 *
 * Return: The number of bytes in the initial segment of `s`
 *         which consist only of characters from `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
while (*s != '\0')
{
int found = 0;
char *tmp = accept;
while (*tmp != '\0')
{
if (*s == *tmp)
{
found = 1;
break;
}
tmp++;
}
if (!found)
{
break;
}
i++;
s++;
}
return (i);
}
