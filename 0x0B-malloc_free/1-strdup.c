#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates a copy of a string.
 * @str: The string to be copied.
 *
 * Return: If str is NULL, NULL.
 *         If memory allocation fails, NULL.
 *         Otherwise, a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *dup;
size_t len;
size_t i;
if (str == NULL)
return (NULL);
len = strlen(str) + 1;
dup = malloc(len *sizeof(char));
if (dup == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup[i] = str[i];
return (dup);
}

