#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int i = 0, j;
char leet_chars[] = "aAeEoOtTlL";
char replacements[] = "4433007711";
while (str[i] != '\0')
{
for (j = 0; j < 10; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = replacements[j];
break;
}
}
i++;
}
return (str);
}
