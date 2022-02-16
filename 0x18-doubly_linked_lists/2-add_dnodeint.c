#include "lists.h"
/**
 * add_dnodeint - adds a node to beginning of a doubly linked list
 * @head: head
 * @n: value to put in node
 *
 * Return: address of added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node, *new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

if (head == NULL)
node = NULL;

node = *head;

if (node == NULL)
{
new->next = NULL;
}
else
{
new->next = *head;
node->prev = new;
}
new->prev = NULL;
new->n = n;
*head = new;
return (*head);
}
