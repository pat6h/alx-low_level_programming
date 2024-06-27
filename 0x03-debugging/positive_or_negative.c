#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - assign a random number to the variable n,
 * @i : integer
 * Return: 0 (success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
