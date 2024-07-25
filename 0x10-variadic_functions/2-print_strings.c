#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (i != 0 && separator != NULL)
printf("%s", separator);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}

va_end(args);
printf("\n");
}
