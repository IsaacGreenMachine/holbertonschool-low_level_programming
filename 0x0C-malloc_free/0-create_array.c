#include <stdlib.h>
/**
 * create_array - creates an array of size size initialized to c.
 * @size: size of array
 * @c: char to be initialized to array
 *
 *
 * Return: pointer to array or NULL if failed.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
{
return (NULL);
}
else
{
char *p = (char *)calloc(size, sizeof(char));
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
}
