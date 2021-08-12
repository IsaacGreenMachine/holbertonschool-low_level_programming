#include "holberton.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string of binary
 * Return: unsigned int or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
const char *pos;
unsigned int num, result;
if (b == NULL)
return (0);

for (pos = b; *pos != '\0'; pos++)
{
if (*pos != '0' && *pos != '1')
return (0);
}

pos--;

for (num = 1, result = 0; pos != b; pos--, num *= 2)
{
result += (*pos - '0') * num;
}
result += (*b - '0') * num;
return (result);
}
