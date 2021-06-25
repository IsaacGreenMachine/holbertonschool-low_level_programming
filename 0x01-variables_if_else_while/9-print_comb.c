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
char m = '0';
char n = '\n';
int i;
for (i = 0; i < 10; i++)
{
putchar(m);
m++;
}
m = 'a';
for (i = 0; i < 6; i++)
{
putchar(m);
m++;
}
putchar(n);
return (0);
}
