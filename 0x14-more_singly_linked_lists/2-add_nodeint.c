#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a listint
 * @head: start of list int
 * @n: value to put in new node
 * Return: pointer to new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
if (*head == NULL)
{
new->next = NULL;
}
else
{
new->next = *head;
}
new->n = n;
*head = new;
return (new);
}
