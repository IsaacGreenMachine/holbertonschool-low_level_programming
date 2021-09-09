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
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
a = *head;
b = a->next;
if (b != NULL)
b->prev = NULL;
*head = b;
free(a);
return (1);
}
for (b = *head; index > 0; b = b->next, index--)
{
if (b == NULL)
return (-1);
}
a = b->prev;
c = b->next;
a->next = c;
c->prev = a;
free(b);
return (1);
}
