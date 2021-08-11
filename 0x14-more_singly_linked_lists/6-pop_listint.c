#include "lists.h"
/**
 * pop_listint - implenets "pop" funcitonality for listints
 * @head: pointer to start of list
 * Return: popped value
 */
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
