#include "main.h"
/**
 * rev_string - unction that reverses a string.
 * @s : value
 * return: 0
 */
void rev_string(char *s)
{
int len = 0, i, half;
while (s[len] != '\0')
{
len++;
}
half = len / 2;
for (i = 0; i < half; i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
