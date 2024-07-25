#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of an undefined number of integers.
 * @n: The number of integers to be added.
 *
 * Return: The sum of all the integers passed as arguments, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list args;

va_start(args, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(args, int);
va_end(args);
return (sum);
}
