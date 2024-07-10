#include "main.h"

/**
 * _pow_recursion - Calculates x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y,
 *         or -1 on error (negative exponent).
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (x == 0 ? -1 : 1);
return (x * _pow_recursion(x, y - 1));
}
