#include "holberton.h"
/**
 * _puts_recursion - uses recursion to recreate puts function
 * @s: pointer to start of a string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s != 0)
{
_putchar(*s);
s++;
_puts_recursion(s--);
}
else if (*s == 0)
{
_putchar('\n');
}
}
