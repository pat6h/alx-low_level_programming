#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search (haystack)
 * @needle: pointer to the substring to find (needle)
 *
 * Return: A pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *start = haystack;
char *current = needle;
while (*current != '\0' && *haystack != '\0')
{
if (*haystack != *current)
{
break;
}
haystack++;
current++;
}
if (*current == '\0')
{
return (start);
}
haystack++;
}
return (NULL);
}
