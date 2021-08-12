#include "holberton.h"
/**
 * clear_bit - clears a bit at a given point
 * @n: pointer to number
 * @index: index to be changed
 * Return: 1 if successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i = 0, count = 64;
if (index > 64)
return (-1);
for (count = 64; count > 0; count--)
{
if (count != index)
i++;
i <<= 1;
}
if ((index != 0) && ((i ^ 1) == 1))
i++;
*n = (*n & i);
return (1);
}
