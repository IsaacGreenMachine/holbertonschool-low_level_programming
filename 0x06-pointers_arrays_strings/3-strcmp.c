/**
 * _strcmp - compares chars of strings.
 * @s1: string1
 * @s2: string2
 *
 * Return: difference of strings or 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
int n;
while (*s1 != 0 && *s2 != 0)
{
n = *s1 - *s2;
s1++;
s2++;
if (n != 0)
{
break;
}
}
return (n);
}
