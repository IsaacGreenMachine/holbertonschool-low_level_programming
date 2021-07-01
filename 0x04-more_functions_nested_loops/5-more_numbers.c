#include "holberton.h"
/**
 *more_numbers- prints numbers from 0-14 10 times
 * Return: void
 */
void more_numbers(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
for (i = 0; i < 5; i++)
{
_putchar('1');
_putchar(i + '0');
}
_putchar('\n');
}
}
