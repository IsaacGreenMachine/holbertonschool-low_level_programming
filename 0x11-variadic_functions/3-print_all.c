#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_all(const char * const format, ...)
{
va_list ap;
const char *c = format;
void (*f)(va_list);
va_start(ap, format);
while(*c != '\0')
{
f = getOps(*c);
f(ap);
c++;
}
va_end(ap);
}

void (*getOps(char s))(va_list)
{
int i = 0;
struct ops ops[] = {
{'c', print_c},
{'i', print_i},
{'f', print_f},
{'s', print_s},
{0, NULL}
};
while(ops[i].c != s && i < 5)
{
i++;
}
return (ops[i].f);
}

void print_c(va_list arg)
{
printf("%c", va_arg(arg, int));
}

void print_i(va_list arg)
{
printf("%i", va_arg(arg, int));
}

void print_f(va_list arg)
{
printf("%f", va_arg(arg, double));
}

void print_s(va_list arg)
{
char *s;
s = va_arg(arg, char *);	
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
}
