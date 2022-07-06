#include "main.h"
/**
 *print_last_digit - print last digit of a number
 *@m: input number
 *Return: the value of last digit
 */
int print_last_digit(int m)
{
if (m < 0)
m = m * -1;
_putchar('0' + (m % 10));
return (m % 10);
}
