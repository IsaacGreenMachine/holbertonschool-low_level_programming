#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: size of memory
 * @size: size of each slot
 *
 * Return: pointer to new memory or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
int i = nmemb * size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
s = malloc(nmemb * size);
if (s == NULL)
{
return (NULL);
}
for (; i >= 0; i--)
{
*(s + i) = 0;
}
return (s);
}
