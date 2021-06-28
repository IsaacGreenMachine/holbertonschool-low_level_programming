#include "holberton.h"

/**
 *print_last_digit- prints absolute value
 *@n: First operand
 *
 * Return: will always be abs(n)
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
