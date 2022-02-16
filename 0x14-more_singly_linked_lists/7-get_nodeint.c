#include "lists.h"
/**
 * get_nodeint_at_index - gets the node at a specified index
 * @head: start of a listint
 * @index: desired node of a listint
 * Return: pointer to desired node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
for (; head != NULL && index != 0; index--, head = head->next)
{
}
if (head == NULL)
return (NULL);
else
return (head);
}
