#include <stdio.h>

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
int is_fizz = (i % 3 == 0);
int is_buzz = (i % 5 == 0);

if (is_fizz && is_buzz)
{
printf("FizzBuzz ");
}
else if (is_fizz)
{
printf("Fizz ");
}
else if (is_buzz)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
