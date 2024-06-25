#include <stdio.h>
/**
*_isalpha -  in lowercase
*@c: the character to check
*Return:0
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
