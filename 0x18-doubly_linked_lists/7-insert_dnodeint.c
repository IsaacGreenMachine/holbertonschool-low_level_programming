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
for (a = *h; a->next != NULL; a = a->next, idx--)
{
if (idx == 0)
return (assignNode(a, b, new, n));
}
if (idx == 0)
{
return (assignNode(a, b, new, n));
}
else if (idx == 1)
{
a->next = new;
new->next = NULL;
new->prev = a;
return (new);
}
else
{
free(new);
return (NULL);
}
}

/**
 * assignNode - assigns a node with given data
 * @a: next node
 * @b: prev node
 * @new: new node
 * @n: value inserted into node
 * Return: address of new node
 */
dlistint_t *assignNode(dlistint_t *a, dlistint_t *b, dlistint_t *new, int n)
{
b = a->prev;
b->next = new;
a->prev = new;
new->prev = b;
new->next = a;
new->n = n;
return (new);
}
