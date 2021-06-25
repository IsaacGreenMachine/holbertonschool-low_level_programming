#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - generates random number and says whether it is even, odd, or zero.
 *
 * betty style doc for function main goes there
 * Return: will always return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	printf("%i is negative\n", n);
	}
	else
	{
		if (n == 0)
		{
		printf("%i is zero\n", n);
		}
		else
		{
		printf("%i is positive\n", n);
		}
	}
	return (0);
}
