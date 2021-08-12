#include "holberton.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string of binary
 * Return: unsigned int or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i;
if (b == NULL)
return (0);
for (i = 0; *b != '\0'; b++, i <<= 1)
{
if (*b != '0' && *b != '1')
return (0);
if (*b == '1')
i++;
}
return (i / 2);
}
