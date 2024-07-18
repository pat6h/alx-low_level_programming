#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
int *arr;
int size, i;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = malloc(size *sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
