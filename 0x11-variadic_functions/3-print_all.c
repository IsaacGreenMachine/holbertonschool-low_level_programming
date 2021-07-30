#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
const char *c = format;
va_list ap;
int pointless = 0;
char *del;
char *s;
va_start(ap, format);
while(*c != '\0')
{
del = ", ";
if(*(c + 1) == '\0')
del = "";
switch (*c){
	case 'c':
		printf("%c%s", va_arg(ap, int), del);
		break;
	case 'i':
                printf("%i%s", va_arg(ap, int), del);
                break;
	case 'f':
                printf("%f%s", va_arg(ap, double), del);
                break;
	case 's':
		s = va_arg(ap, char *);
		if (s == NULL)
		printf("%s%s", "(nil)", del);
		printf("%s%s", s, del);
                
		break;
	default:
		pointless += 1;	
}
		c++;
}
printf("\n");
va_end(ap);
}
