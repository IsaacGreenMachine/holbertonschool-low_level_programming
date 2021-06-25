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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int q;

	q = abs(n % 10);

	if (q == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, q);
	}
	else
	{
		if (q > 5)
		{
		printf("Last digit of %i is %i and is greater than 5\n", n, q);
		}
		else
		{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, q);
		}
	}
	return (0);
}
