#include "holberton.h"

/**
 *islower- prints alphabet in lowercase using _putchar ten times
 *@c: First operand
 *
 * Return: will always be void
*/
int islower(int c)
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
