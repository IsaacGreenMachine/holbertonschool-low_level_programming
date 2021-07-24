#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min of range
 * @max: max of range
 *
 * Return: pointer to array or NULL if fails
 */
int *array_range(int min, int max)
{
int *p;
int i;
if (min > max)
{
return (NULL);
}
p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < max - min; i++)
{
p[i] = i + min;
}
return (p);
}
