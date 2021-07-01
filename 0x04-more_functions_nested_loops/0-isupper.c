#include "holberton.h"
/**
 *_isupper- checks if char c is uppercase.
 *@c: passed char
 *
 * Return: 1 if uppercase. 0 if not.
 */

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
