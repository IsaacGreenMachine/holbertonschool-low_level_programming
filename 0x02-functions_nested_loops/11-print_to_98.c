#include <stdio.h>

/**
 *print_to_98- prints all natural numbers from n to 98
 *@n: First operand
 *
 * Return: will always be abs(n)
*/

void print_to_98(int n)
{
if (n == 98)
{
printf("%i, ", n);
}
else if (n < 98)
{
for (n = n; n < 99; n++)
{
printf("%i, ", n);
}
}
else
{
for (n = n; n > 97; n--)
{
printf("%i, ", n);
}
}
printf("\n");
}
