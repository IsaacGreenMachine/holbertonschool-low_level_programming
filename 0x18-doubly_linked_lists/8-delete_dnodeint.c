#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: head
 * @index: index
 * Return: 0 or 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *a, *b, *c;
for (a = *head; index > 0; a = a->next, index--)
{
}
b = a->next;
c = b->next;
a->next = c;
c->prev = a;
free(b);
return (1);
}
