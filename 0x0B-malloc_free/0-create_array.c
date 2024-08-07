#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The character to fill the array with.
 *
 * Return: If size is 0, NULL.
 *         If the function fails, NULL.
 *         Otherwise, a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
