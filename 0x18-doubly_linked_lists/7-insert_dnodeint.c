#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: ptr to head node
 * @idx: index to insert node
 * @n: value to put in node
 * Return: address of node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *a, *b = NULL, *new = malloc(sizeof(dlistint_t));
if (new == NULL || h == NULL)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
for (a = *h; a->next != NULL; a = a->next, idx--)
{
if (idx == 0)
{
b = a->prev;
b->next = new;
a->prev = new;
new->prev = b;
new->next = a;
new->n = n;
return (new);
}
}
if (idx == 0)
{
b = a->prev;
b->next = new;
a->prev = new;
new->prev = b;
new->next = a;
new->n = n;
return (new);
}
else if (idx == 1)
{
return (add_dnodeint_end(h, n));
}
else
{
free(new);
return (NULL);
}
}
