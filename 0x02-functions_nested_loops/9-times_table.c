#include "holberton.h"

/**
 *times_table- prints 9x9 times table
 * Return: will always be void
*/

void times_table(void)
{
int i = 1;
int j = 1;
int q;
int r;
int s;
for (j = 0; j < 10; j++)
{
	for (i = 0; i < 10; i++)
	{
		q = (i * j);
		r = (q / 10);
		s = (q % 10);
		if (i > 0)
		{
		_putchar(' ');
		}
		if (q < 10 && i > 0)
		{
		_putchar(' ');
		}
		if (q < 10)
		{
		_putchar(q + '0');
		}
		else
		{
		_putchar(r + '0');
		_putchar(s + '0');
		}
		if (i < 9)
		{
		_putchar(',');
		}
	}
	_putchar('\n');
}
}
