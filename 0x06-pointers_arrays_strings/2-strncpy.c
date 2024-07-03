#include "main.h"

/**
 *_strncpy - function that copies a string.
 * should work exactly like strncpy
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *@n: value
 * Return: returns poiner to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
