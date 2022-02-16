#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at a given index
 * @head: address of head of linked list
 * @index: index of node desired
 * Return: pointer to node;
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index > 0; index--)
{
head = head->next;
if (head->next == NULL)
return (NULL);
}
return (head);
}
