#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to the start of a string of chars
 *
 * Return: void
 */

void print_rev(char *s)
{
char *start = s;
while (*s != 0)
{
s++;
}
s--;
for (s = s; s >= start; s--)
{
_putchar(*s);
}
_putchar('\n');
}
