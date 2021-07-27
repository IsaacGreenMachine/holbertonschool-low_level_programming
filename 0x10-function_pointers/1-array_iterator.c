#include <stddef.h>
/**
 * array_iterator - uses a passed function on a passed array
 * @array: passed array
 * @size: size of passed array
 * @action: function to be used on array
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != 0 && action != 0)
{
unsigned int i = 0;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
