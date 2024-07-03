#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
}
else if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
}
i++;
}
return (str);
}
