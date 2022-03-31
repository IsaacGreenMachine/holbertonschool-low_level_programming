#include "search_algos.h"


/**
 * linear_skip - linear search on skip list
 * @list: start of express list
 * @value: value to be found in list
 * Return: skiplist_t pointer to found value or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{

skiplist_t *point = list;
int length = list_len(list);

while (point->express != NULL)
{
if (point->express->n >= value)
{
printf("Value checked at index [%lu] = [%i]\n",
point->express->index,
point->express->n);
printf("Value found between indexes [%lu] and [%lu]\n",
point->index,
point->express->index);
return (inside_search(point, value));
}

point = point->express;
printf("Value checked at index [%lu] = [%i]\n", point->index, point->n);
}
printf("Value found between indexes [%lu] and [%i]\n", point->index, length);
return (inside_search(point, value));
}

/**
 * inside_search - linear search on inner list of skip list
 * @point: start of inside list
 * @value: value to be found in list
 * Return: skiplist_t pointer to found value or NULL
 */
skiplist_t *inside_search(skiplist_t *point, int value)
{
while (point != NULL)
{

if (point != NULL && point->n == value)
{
printf("Value checked at index [%lu] = [%i]\n", point->index, point->n);
return (point);
}

printf("Value checked at index [%lu] = [%i]\n", point->index, point->n);
point = point->next;

}

return (NULL);
}

/**
 * list_len - returns length of linked (skip) list
 * @list: start of inside list
 * Return: length of list
 */
int list_len(skiplist_t *list)
{
int i;
for (i = 0; list != NULL; i++)
list = list->next;
return (i - 1);
}


