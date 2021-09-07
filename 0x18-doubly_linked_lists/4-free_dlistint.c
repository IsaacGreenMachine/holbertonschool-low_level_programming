#include "lists.h"
void free_dlistint(dlistint_t *head)
{
dlistint_t *a = head;
while(a != NULL) 
{
a = a->next;
free(head);
head = a;
}
}
