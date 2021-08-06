#include "lists.h"
/**
 * list_len - returns size of a linked list
 * @h: pointer to linked list
 *
 * Return: size
 */
size_t list_len(const list_t *h)
{
int count;
if (h == NULL)
return (0);
for (count = 0; h != NULL; h = h->next, count++)
{
}
return (count);
}
