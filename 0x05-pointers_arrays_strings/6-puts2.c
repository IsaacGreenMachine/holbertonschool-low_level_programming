#include "holberton.h"
/**
 * puts2 - prints every other char of a string.
 * @str: passed pointer to the start of a string
 *
 * Return: void
 */

void puts2(char *str)
{
while (*str != 0)
{
_putchar(*str);
str++;
if (*str == 0)
{
break;
}
else
{
str++;
}
}
_putchar('\n');
}
