#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to array to be searched
 * @accept: array of chars to be searched for
 *
 * Return: number of occurances
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
