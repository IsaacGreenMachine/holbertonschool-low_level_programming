#include <string.h>
#include <stdlib.h>
/**
 * _strdup - duplicate string to newly allocated mem spot
 * @str: pointer to str to be duplicated
 *
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
if (str == 0)
{
return (NULL);
}
else
{
void *p = malloc(strlen(str));
strcpy(p, str);
return (p);
}
}
