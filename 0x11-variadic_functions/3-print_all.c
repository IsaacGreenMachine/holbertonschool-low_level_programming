#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all passed arguments
 * @format: string format of arguments
 *
 * Return: Always void
 */
void print_all(const char * const format, ...)
{
va_list ap;
const char *c = format;
void (*f)(va_list);
va_start(ap, format);
while (*c != '\0')
{
f = getOps(*c);
f(ap);
c++;
}
va_end(ap);
}
/**
 * getOps - returns function pointer based on char
 * @s: passed char
 *
 * Return: function pointer
 */
void (*getOps(char s))(va_list)
{
int i = 0;
op_t ops[] = {
{'c', print_c},
{'i', print_i},
{'f', print_f},
{'s', print_s},
{0, NULL}
};
while (ops[i].c != s && i < 5)
{
i++;
}
return (ops[i].f);
}
/**
 * print_c - prints a char
 * @arg: valist
 *
 * Return: void
 */
void print_c(va_list arg)
{
printf("%c", va_arg(arg, int));
}
/**
 * print_i - prints int
 * @arg: valist
 *
 * Return: void
 */
void print_i(va_list arg)
{
printf("%i", va_arg(arg, int));
}
/**
 * print_f - prints a float
 * @arg: valist
 *
 * Return: void
 */
void print_f(va_list arg)
{
printf("%f", va_arg(arg, double));
}
/**
 * print_s - prints a string
 * @arg: valist
 *
 * Return: void
 */
void print_s(va_list arg)
{
char *s;
s = va_arg(arg, char*);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
}
