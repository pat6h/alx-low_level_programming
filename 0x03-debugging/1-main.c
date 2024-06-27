#include <stdio.h>

/**
 * main - causes an infinite loop (commented out)
 * Return: 0
 */

int main(void)
{
int i;
printf("Infinite loop incoming :(\n");

i = 0;

/**
* main - Commenting out the while loop prevents the infinite loop
* while (i < 10) {
* putchar(i);
* }
*/
printf("Infinite loop avoided! \\o/\n");

return (0);
}
