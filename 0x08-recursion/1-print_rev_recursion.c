#include "holberton.h"
/**
 * _print_rev_recursion - prints a string backwards using recursion
 * @s: pointer to start of string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
if (*s != 0)
{
s++;
_print_rev_recursion(s--);
}
_putchar(*s);
}
