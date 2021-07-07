#include "holberton.h"
/**
 * puts_half - print second half of a string, always taking the smaller half.
 * @str: starting location of the passed string
 *
 * Return: void
 */
void puts_half(char *str)
{
char *i = str;
while (*i != 0)
{
i++;
}
i--;
while (i > str)
{
i--;
str++;
}
i++;
while (*i != 0)
{
_putchar(*i);
i++;
}
_putchar('\n');
}
