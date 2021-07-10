/**
 * compare - compares two strings.
 * @X: string 1
 * @Y: string 2
 *
 * Return: 0 if not similar. NULL if similar.
 */
int compare(const char *X, const char *Y)
{
while (*X && *Y)
{
if (*X != *Y)
{
return (0);
}
X++;
Y++;
}
return (*Y == '\0');
}

/**
 * _strstr - returns first occurance of a substring.
 * @needle: substring to be searched for
 * @haystack: string to be searched
 *
 * Return: start of substring or NULL if does not occur.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
if ((*haystack == *needle) && compare(haystack, needle))
{
return (haystack);
}
haystack++;
}
return ('\0');
}
