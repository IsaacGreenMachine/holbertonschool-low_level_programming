/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to array to be searched
 * @accept: list of chars to be searched for
 *
 * Return: pointer to first occurance
 */
char *_strpbrk(char *s, char *accept)
{
char *a;
for( ; *s != 0; s++)
{
for (a = accept; *a != 0; a++)
{
if (*s == *a)
{
return (s);
}
}
}
if (*s == *a)
{
return (s);
}
return ('\0');
}
