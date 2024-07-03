#include "main.h"
/**
 * string_toupper - converts lowercase letters of a string to uppercase
 * @str: the string to be converted
 *
 * Return: A pointer to the converted string.
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 'a' - 'A';
}
i++;
}
return (str);
}
