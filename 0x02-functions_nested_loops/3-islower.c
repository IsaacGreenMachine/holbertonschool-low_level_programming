#include "holberton.h"

/**
 *_islower- checks if passed number is lowercase in ASCII
 *@c: First operand
 *
 * Return: 1 if lowercase, 0 if not.
*/
int _islower(int c)
{
if (c > 96 && c < 123)
{
	return (1);
}
else
{
	return (0);
}
}
