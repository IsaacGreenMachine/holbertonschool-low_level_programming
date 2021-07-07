#include <stdio.h>
#include "holberton.h"
/**
 * _strcpy - copies string from source to destination
 * @src: starting point of source string
 * @dest: starting point of destination
 *
 * Return: pointer to start of destination string
 */

char *_strcpy(char *dest, char *src)
{
char *srcStart = src;
while (*src != 0)
{
*dest = *src;
src++;
dest++;
}
*dest = *src;
return (srcStart);
}
