#include "search_algos.h"

/**
 * binary_search - implements a binary search
 * @array: array to be searched
 * @size: size of array
 * @value: value to search array for
 * Return: index of @value or -1 if not present
 */
int binary_search(int *array, size_t size, int value)
{
int L = 0;
int R = size - 1;
int m = 0;
if (array == NULL)
return (-1);
for (; L <= R; )
{
printf("Searching in array: ");
print_array(&array[L], R - L + 1);
m = (L + R) / 2;
if (array[m] < value)
L = m + 1;
else if (array[m] > value)
R = m - 1;
else
return (m);
}
return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
size_t i;

i = 0;
while (array && i < size)
{
if (i > 0)
printf(", ");
printf("%d", array[i]);
++i;
}
printf("\n");
}
