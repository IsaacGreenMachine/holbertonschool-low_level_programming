#include <stdlib.h>
/**
 * int_index - finds a number in an array based on a function
 * @array: pointer to an array of ints
 * @size: size of passed array
 * @cmp: pointer to a function to be used
 *
 * Return: index of found number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (cmp == NULL || array == NULL)
{
return (-1);
}
else
{
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
}
