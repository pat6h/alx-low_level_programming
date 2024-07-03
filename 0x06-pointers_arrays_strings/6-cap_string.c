#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0, is_word = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0 || is_word == 0)
{
str[i] -= 'a' - 'A';
is_word = 1;
}
}
else
{
is_word = 0;
}
i++;
}
return (str);
}
