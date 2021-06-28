#include "holberton.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - prints alphabet in lowercase using _putchar ten times
 * Return: will always be void
 * betty style doc for function main goes there
*/
void print_alphabet_x10(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 26; i++)
{
_putchar(i + 97);
}
_putchar('\n');
}
}
