/**
 * _strchr - searches passed string s for char c
 * @s: start of string
 * @c: char to be searched for
 *
 * Return: pointer to char location or NULL if not found
 */
char *_strchr(char *s, char c)
{
for (; *s != 0; s++)
{
if (*s == c)
{
return (s);
}
}
if (*s == c)
{
return (s);
}
return ('\0');
}
