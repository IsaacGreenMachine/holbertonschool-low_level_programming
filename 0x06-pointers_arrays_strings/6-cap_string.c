/**
 * cap_string - capitalizes all words in a string
 * @c: pointer to start of string
 *
 * Return: pointer to start of string
 */
char *cap_string(char *c)
{
char *i = c;
while (*i != 0)
{
if (*i == ' ' || *i == '\t' || *i == '\n' || *i == ',' || *i == ';')
{
i++;
if (*i <= 122 && *i >= 97)
{
*i = *i - 32;
i++;
}
}
else if (*i == '.' || *i == '!' || *i == '?' || *i == '"' || *i == '(')
{
i++;
if (*i <= 122 && *i >= 97)
{
*i = *i - 32;
i++;
}
}
else if (*i == ')' || *i == '{' || *i == '}')
{
i++;
if (*i <= 122 && *i >= 97)
{
*i = *i - 32;
i++;
}
}
else
{
i++;
}
}
return (c);
}
