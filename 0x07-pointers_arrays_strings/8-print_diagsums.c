#include <stdio.h>
/**
 * print_diagsums - prints the sums of each diagonal of a square matrix
 * @a: pointer to start of 2d array
 * @size: size of dimension of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int count;
int row;
for (count = 0, row = 0; count < size * size; count += size, row++)
{
sum1 = sum1 + *(a + count + row);
}
for (count = 0, row = size - 1; count < size * size; count += size, row--)
{
sum2 = sum2 + *(a + count + row);
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
