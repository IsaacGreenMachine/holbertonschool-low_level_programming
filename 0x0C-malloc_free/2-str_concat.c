#include <string.h>
#include <stdlib.h>
/**
 * str_concat - cats two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to catted string or NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
char *p = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
p = (char *)malloc(strlen(s1) + strlen(s2) + 1);
if (p == NULL)
{
return (NULL);
}
p = strcpy(p, s1);
strcpy(p + strlen(s1), s2);
return (p);
}
