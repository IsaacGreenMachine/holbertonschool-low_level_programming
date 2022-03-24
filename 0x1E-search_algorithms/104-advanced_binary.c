#include "search_algos.h"

/**
 * advanced_binary - implements a binary search that finds first occurance
 * @array: array to be searched
 * @size: size of array
 * @value: value to search array for
 * Return: index of @value or -1 if not present
 */
int advanced_binary(int *array, size_t size, int value)
{
return (adv_bin_search(array, 0, size - 1, value));
}

/**
 * adv_bin_search - implements a binary search that finds first occurance
 * @array: whole array
 * @start: starting pos
 * @end: ending pos
 * @value: value to search array for
 * Return: index of @value or -1 if not present
 */
int adv_bin_search(int *array, int start, size_t end, int value)
{
int L = start;
int R = end;
int m = start;
if (array == NULL)
return (-1);
if (L <= R)
{
printf("Searching in array: ");
print_array(&array[L], R - L + 1);
m = (L + R) / 2;
if (array[m] < value)
L = m + 1;
else if (array[m] > value)
R = m;
else
return (find_lowest(array, m));
return (adv_bin_search(array, L, R, value));
}
else
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

/**
 * find_lowest - returns lowest index of repeating vals in an array
 * @array: whole array
 * @pos: post of val
 * Return: index of @value or -1 if not present
 */
int find_lowest(int *array, int pos)
{
if (pos == 0)
return (pos);
if (array[pos] == array[pos - 1])
return (find_lowest(array, pos - 1));
return (pos);
}
