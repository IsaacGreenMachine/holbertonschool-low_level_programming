#include <string.h>
#include <stdlib.h>
/**
 * str_concat - cats two strings
 * @s1: first string
 * @s2: second string
 *
 *
 * Return: pointer to catted string or NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
char *p = (char *)malloc(strlen(s1) + strlen(s2));
char *q = p;
if (p == NULL)
{
return (NULL);
}
if (s1 != NULL)
{
while (*s1 != 0)
{
*p = *s1;
p++;
s1++;
}
}
if (s2 != NULL)
{
while (*s2 != 0)
{
*p = *s2;
p++;
s2++;
}
}
return (q);
}
