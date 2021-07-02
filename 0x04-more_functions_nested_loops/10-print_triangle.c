#include "holberton.h"
/**
 *print_triangle- prints a right triangle of size size.
 *@size: size of triangle
 *
 * Return: void.
 */
void print_triangle(int size)
{
int d;
int i;
int j;
for (d = size - 1; d >= 0; d--)
{
for (i = 0; i < d; i++)
{
	_putchar(' ');
}
for (j = 0; j < size - d; j++)
{
	_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
