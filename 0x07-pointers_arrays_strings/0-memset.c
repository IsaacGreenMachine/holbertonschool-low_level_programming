/**
 * _memset - sets n bytes of memory at s to char b.
 * @s: location of memory to be set
 * @b: what memory will be set to
 * @n: number of bytes of memory to be changed
 *
 * Return: pointer to start of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int count;
char *c = s;
for (count = 0; count < n; count++)
{
*c = b;
c++;
}
return (s);
}
