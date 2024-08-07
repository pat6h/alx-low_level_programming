#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 * @i: value
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i);
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n <= 3)
return (1);
if ((n % 2 == 0) || (n % 3 == 0))
return (0);
return (is_prime_helper(n, 5));
}
/**
 * is_prime_helper - Helper function for efficient prime number checking.
 * @n: The number to check.
 * @i: The potential divisor (starting from 5).
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
if (i * i > n)
	return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i + 6));
}
