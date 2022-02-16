#include "function_pointers.h"
/**
 * print_name - prints a name using a passed function
 * @name: name to print
 * @f: function used to print name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
