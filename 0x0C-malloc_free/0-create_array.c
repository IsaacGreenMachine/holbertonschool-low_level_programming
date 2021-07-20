#include <stdlib.h>
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
