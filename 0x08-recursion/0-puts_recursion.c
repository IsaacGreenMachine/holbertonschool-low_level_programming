#include "holberton.h"
/**
 * _puts_recursion - uses recursion to recreate puts function
 * @s: pointer to start of a string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
_putchar(*s);
if (*s != 0)
{
s++;
_puts_recursion(s--);
}
else
{
_putchar('\n');
}
}
