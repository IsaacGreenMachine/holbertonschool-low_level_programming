#include <stdio.h>
/**
 * _strspn - spans strings
 * @s: pointer
 * @accept: pointer
 *
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
char *a;
for ( ; *s != 0; s++)
{
for (a = accept; *a != 0;)
{
if (*s == *a)
{
s++;
n++;
}
else
{
a++;
}
}
}
return (n);
}
