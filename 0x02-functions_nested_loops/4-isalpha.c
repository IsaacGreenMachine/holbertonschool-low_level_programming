#include "holberton.h"

/**
 *_isalpha- prints alphabet in lowercase using _putchar ten times
 *@c: First operand
 *
 * Return: will always be void
*/
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
}
