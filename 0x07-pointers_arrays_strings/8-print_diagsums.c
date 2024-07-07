#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of a square matrix of integers
 * @size: the size of the input square matrix
 *
 * Return: Nothing (void)
 */
void print_diagsums(int *a, int size)
{
int i, sum_diag1 = 0, sum_diag2 = 0;
for (i = 0; i < size; i++)
{
int diag1_index = i * (size + 1);
int diag2_index = (i + 1) * (size - 1);
sum_diag1 += a[diag1_index];
sum_diag2 += a[diag2_index];
}
printf("%d, %d\n", sum_diag1, sum_diag2);
}
