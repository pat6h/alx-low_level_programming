#include <stdio.h>
int main()
{
  int n = 1024, sum = 0;
  int last_multiple_of_3 = n / 3 - 1;
  int last_multiple_of_5 = n / 5 - 1;

  sum += 3 * (last_multiple_of_3 + 1) * last_multiple_of_3 / 2;
  sum += 5 * (last_multiple_of_5 + 1) * last_multiple_of_5 / 2;

  int last_multiple_of_15 = n / 15 - 1;
  sum -= 15 * (last_multiple_of_15 + 1) * last_multiple_of_15 / 2;

  printf("The sum of multiples of 3 or 5 below %d is: %d\n", n, sum);

  return 0;
}
