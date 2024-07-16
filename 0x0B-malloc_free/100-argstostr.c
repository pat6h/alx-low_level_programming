#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac is 0 or av is NULL, NULL.
 *         If memory allocation fails, NULL.
 *         Otherwise, a pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len, index;
if (ac == 0 || av == NULL)
return (NULL);
len = 0;
for (i = 0; i < ac; i++)
len += strlen(av[i]);
len += ac - 1;
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);
index = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
str[index++] = av[i][j];
if (i != ac - 1)
str[index++] = '\n';
}
return (str);
}
