#include "main.h"
/**
 *_isupper - checks for uppercase
 *@c: ASCII value of input character
 *Return: 1 if it is uppercase 0 otherwise
 */
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
{
return (1);
}
else
{
return (0);
}
}
