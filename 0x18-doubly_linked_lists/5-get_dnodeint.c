#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for(; index > 0; index--)
{
head = head->next;
if (head == NULL)
return (NULL);
}
return(head);
}
