/**
 * _strncpy - copies n characters from src to beginning of dest.
 * @dest: pointer to the beginning of copy destination
 * @src: pointer to beginning of what to copy
 * @n: number of bytes to be copied
 *
 * Return: pointer to beginning of copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
char *i = dest;
char *j = src;
int count = 0;
while (*j != 0 && count < n)
{
*i = *j;
i++;
j++;
count++;
}

if (*j == 0)
{
while (count < n)
{
*i = 0;
i++;
count++;
}
}
return (dest);
}
