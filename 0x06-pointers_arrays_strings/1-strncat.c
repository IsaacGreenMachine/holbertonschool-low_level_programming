/**
 * _strncat - concatenates two strings up to n bytes
 * @dest:final destination of catted strings
 * @src:string to be catted to dest
 * @n:number of bytes to cat from src
 *
 * Return: pointer to beginning of catted strings
 */
char *_strncat(char *dest, char *src, int n)
{
char *i = dest;
char *j = src;
int count = 1;
while (*i != 0)
{
i++;
}
while (*j != 0 && count <= n)
{
*i = *j;
i++;
j++;
count++;
}
if (*j == 0)
{
*i = 0;
}
return (dest);
}
