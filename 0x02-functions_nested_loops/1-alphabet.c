#include "holberton.h"
/* more headers goes there */

/**
 * print_alphabet - prints alphabet in lowercase using _putchar
 * Return: will always be void
 * betty style doc for function main goes there
*/
void print_alphabet(void)
{
int i;
for (i = 0; i < 26; i++)
{
_putchar(i + 97);
}
	 _putchar('\n');
}
