#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the first element of the array
 * @n: the number of elements in the array
 *
 * Return: nothing (void)
 */
void reverse_array(int *a, int n)
{
int i = 0;
while (i < n / 2)
{
int temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
i++;
}
}
