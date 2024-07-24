#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: On success - 0. On error - 1 or 2.
 */
int main(int argc, char *argv[])
{
unsigned char *main_func;
size_t num_bytes, i;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes <= 0)
{
printf("Error\n");
return (2);
}
main_func = (unsigned char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%.2x ", main_func[i]);
}
printf("\n");
return (0);
}
