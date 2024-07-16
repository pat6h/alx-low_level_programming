#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If the function fails, NULL.
 *         Otherwise, a pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
char *new_str;
unsigned int len1, len2, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
new_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (new_str == NULL)
return (NULL);
for (i = 0; i < len1; i++)
new_str[i] = s1[i];
for (j = 0; j <= len2; j++)
new_str[i + j] = s2[j];
return (new_str);
}


