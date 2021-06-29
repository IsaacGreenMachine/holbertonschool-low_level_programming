#include "holberton.h"

/**
 *print_last_digit- prints last digit of a number 
 *@n: First operand
 *
 * Return: last digit of number
*/

int print_last_digit(int n)
{
int q = (n % 10);
if (q > 0)
{
_putchar(q + '0');
return (q);
}
else if (q < 0)
{
_putchar((q * -1) + '0');
return (q * -1);
}
else
{
_putchar('0');
return (0);
}
}
