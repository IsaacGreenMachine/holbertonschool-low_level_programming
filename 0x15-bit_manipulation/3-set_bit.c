#include "holberton.h"
/**
 * set_bit - sets a bit at a given point
 * @n:
 * @index:
 * Return: 1 if successful, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int i = 1;
if (index > 64)
return (-1);
for (; index > 0; index--)
{
i <<= 1;
}
*n = (*n | i); 
return (1);
}
