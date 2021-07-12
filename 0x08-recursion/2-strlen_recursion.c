#include <stdio.h>
/**
 * _strlen_recursion - returns length of passed string
 * @s: pointer to start of string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if(*s == 0)
{
return (0);
}
else
{
s++;
return (_strlen_recursion(s) + 1 );
}
}
