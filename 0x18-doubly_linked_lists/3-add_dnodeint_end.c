#include "lists.h"
/**
 * add_dnodeint_end - adds a node to end of a doubly linked list
 * @head: head
 * @n: value to put in node
 *
 * Return: address of added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *a, *b = malloc(sizeof(dlistint_t));
if (head == NULL)
{
free(b);
return (NULL);
}
if (*head == NULL)
{
*head = b;
b->prev = NULL;
}
else
{
for (a = *head; a->next != NULL; a = a->next)
{
}
a->next = b;
b->prev = a;
}
b->n = n;
b->next = NULL;
return (b);
}
