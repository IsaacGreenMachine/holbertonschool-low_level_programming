#include "holberton.h"

/**
 *_isalpha- checks if passed in is alphabetical as ASCII
 *@c: First operand
 *
 * Return: 1 if alphabetical, 0 if not
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
