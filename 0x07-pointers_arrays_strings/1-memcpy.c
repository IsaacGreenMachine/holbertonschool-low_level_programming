/**
 * _memcpy - copies n bytes from src to dest
 * @src: location to be copied from
 * @dest: location to be copied to
 * @n: number of bytes to be copied
 *
 * Return: start of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *c = dest;
unsigned int count;
for (count = 0; count < n; count++, c++, src++)
{
*c = *src;
}
return (dest);
}
