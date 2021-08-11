#include "lists.h"
int pop_listint(listint_t **head)
{
int n;
listint_t *hedd = *head;
if (head == NULL)
return (0);
n = hedd->n;
hedd = hedd->next;
free(*head);
*head = hedd;
return (n);
}
