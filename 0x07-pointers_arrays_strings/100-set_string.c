#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to a char (pointer to a pointer to a char)
 * @to: pointer to the string to set
 *
 * Return: Nothing (void)
 */
void set_string(char **s, char *to)
{
*s = to;
}
