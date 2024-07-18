#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer to a newly allocated space containing the concatenated
 *         string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len1, len2, copy_len, total_len;
char *ptr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
copy_len = (int)n < len2 ? (int)n : len2;
total_len = len1 + copy_len + 1;
ptr = malloc(total_len *sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
strcpy(ptr, s1);
strncpy(ptr + len1, s2, n);
ptr[total_len - 1] = '\0';
return (ptr);
}
