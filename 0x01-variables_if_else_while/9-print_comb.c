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
int i;
int x = 48; /*zero*/
int y = 10; /*newline*/
int z = 32; /*space*/
int c = 44; /*comma*/
for (i = 0; i < 10; i++)
{
putchar(x);
if (x != 57)
{
putchar(c);
putchar(z);
}
x++;
}
putchar(y);
return (0);
}
