#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers inputted
 * @separator: what comes between printed numbers
 * @n: number of inputs
 *
 * Return: Always void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int count;
va_list ap;
va_start(ap, n);
for (count = 0; count < n; count++)
{
printf("%i", va_arg(ap, int));
if (count < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
