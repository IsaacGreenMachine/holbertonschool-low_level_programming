#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a listint
 * @head: start of list int
 * @n: value to put in new node
 * Return: pointer to new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
listint_t *pos;
if (new == NULL)
return (NULL);
if (*head == NULL)
{
*head = new;
}
else
{
for (pos = *head; pos->next != NULL; pos = pos->next)
{
}
pos->next = new;
}
new->n = n;
new->next = NULL;
return (new);
}
