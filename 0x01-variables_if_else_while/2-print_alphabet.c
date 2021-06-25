#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - generates a random number and makes a statement about the last digit
 * Return: will always be 0
 * betty style doc for function main goes there
 */
int main(void)
{
	char m = 'a';
	char n = '\n';
for (int i = 0; i < 26; i++)
{
	putchar(m);
	m++;
}
putchar(n);
	return (0);
}

