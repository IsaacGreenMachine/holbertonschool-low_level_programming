#include <stdio.h>
/**
 * print_array - prints n items of an array.
 * @n: number of items to be printed
 * @a: passed array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
}
	printf("\n");
}
