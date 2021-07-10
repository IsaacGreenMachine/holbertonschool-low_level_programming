#include <stdio.h>
/**
 * reverse_array - reverses an array
 * @a: a pointer to an array of integers
 * @n: the number of elements in the array
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int *b = a;
int count;
int c;
for (count = 1; count < n; count++)
{
b++;
}
while (a <= b)
{
c = *a;
*a = *b;
*b = c;
a++;
b--;
}
}
