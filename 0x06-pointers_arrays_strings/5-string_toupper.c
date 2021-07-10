/**
 * string_toupper - converts lowercase letters in a string to uppercase
 * @c: pointer to string
 *
 * Return: pointer to start of converted string
 */
char *string_toupper(char *c)
{
char *i = c;
while (*i != 0)
{
if (*i <= 122 && *i >= 97)
{
*i = *i - 32;
}
i++;
}
return (c);
}
