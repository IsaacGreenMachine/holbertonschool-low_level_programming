#include "holberton.h"

/**
 *jack_bauer- prints time from 00:00 to 23:59
 * Return: will always be void
*/

void jack_bauer(void)
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;

for (a = 0; (a < 3) ; a++)
{
for (b = 0; b < 10; b++)
{
for (c = 0; c < 6; c++)
{
for (d = 0; d < 10; d++)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
if (a == 2 && b == 3 && c == 5 && d == 9)
{
a = 100;
b = 100;
c = 100;
d = 100;
break;
}
}
}
}
}
}

