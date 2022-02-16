#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head
 *
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *a = head;
while (a != NULL)
{
a = a->next;
free(head);
head = a;
}
}
