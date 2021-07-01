#include "holberton.h"
/**
 *print_line- draws a horizontal line
 *@n: length of the line to be drawn
 *
 * Return: void.
 */
void print_line(int n)
{
int l;
for (l = 0; l < n; l++)
{
_putchar('_');
}
_putchar('\n');
}
