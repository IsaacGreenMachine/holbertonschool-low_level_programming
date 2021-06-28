#include "holberton.h"

/**
 *print_sign- prints alphabet in lowercase using _putchar ten times
 *@n: First operand
 *
 * Return: will always be void
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

