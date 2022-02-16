#include "lists.h"
/**
 * dlistint_len - returns length of a doubly linked list
 * @h: head
 * Return: length of list;
 */
size_t dlistint_len(const dlistint_t *h)
{
int i;
for (i = 0; h != NULL; i++, h = h->next)
{
}
return (i);
}
