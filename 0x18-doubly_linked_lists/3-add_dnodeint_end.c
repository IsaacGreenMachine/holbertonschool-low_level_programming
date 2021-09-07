#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *a, *b = malloc(sizeof(dlistint_t));
if (head == NULL || *head == NULL)
{
*head = b;
b->prev = NULL;
}
else
{
for(a = *head; a->next != NULL; a = a->next)
{
}
a->next = b;
b->prev = a;
}
b->n = n;
b->next = NULL;
return (b);
}
