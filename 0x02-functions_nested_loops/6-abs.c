#include "holberton.h"

/**
 *_abs- prints absolute value
 *@n: First operand
 *
 * Return: will always be abs(n)
*/
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (n * -1);
}
else
{
return (0);
}
}
