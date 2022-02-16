#include "lists.h"
/**
 * sum_dlistint - sums all values in a doubly linked list
 * @head: head of list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
int i;
for (i = 0; head != NULL; i += head->n, head = head->next)
{
}
return (i);
}
