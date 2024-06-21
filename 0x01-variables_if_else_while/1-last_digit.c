#include <stdlib>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n each time it is executed
 * return: 0 (success)
 */
int main(void)
{
	int n;

	srand(tim(0));
	n = rand();

	int Last_digit = n % 10;

	printf("Last digit of %d is ", n);

	if (Last_figit > 5) {
		printf("and is greater than 5\n");
	} else if (last_digit == 0){
		printf("and is 0\n");
	} else {
		printf("and is less than 6 and not 0\n);
	}
	return (0);
}
