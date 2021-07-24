#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings up to n chars
 * @n: where s2 is cut
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to catted string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (n >= strlen(s2))
{
s = malloc((strlen(s1) + strlen(s2)) + 1);
if (s == NULL)
{
return (NULL);
}
s = strcpy(s, s1);
s = strcpy((s + strlen(s1)), s2);
}
else
{
s = malloc((strlen(s1) + n) + 1);
if (s == NULL)
{
return (NULL);
}
s = strcpy(s, s1);
s = strncat(s, s2, n);
}
return (s);
}
