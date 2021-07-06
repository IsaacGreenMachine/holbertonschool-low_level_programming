#include "holberton.h"
/**
 * _puts - prints a string
 * @str: pointer to the start of a string of chars
 *
 * Return: void
 */

void _puts(char *str)
{
while (*str != 0)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
