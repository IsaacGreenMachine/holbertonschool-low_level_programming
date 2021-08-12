#include "holberton.h"
/**
 * clear_bit - clears a bit at a given point
 * @n: pointer to number
 * @index: index to be changed
 * Return: 1 if successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);
*n = (*n & ~(1 << index));
return (1);
}
