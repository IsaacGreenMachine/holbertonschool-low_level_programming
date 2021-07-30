#include <stdarg.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int count;
va_list ap;
char *s;
va_start(ap, n);
for (count = 0; count < n; count++)
{
s = va_arg(ap, char*);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (separator != NULL && count < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
