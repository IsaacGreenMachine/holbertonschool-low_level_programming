#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a listint at a given position
 * @head: start of list
 * @index: index for node to be deleted
 *
 * Return: 1 if success -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
int i;
listint_t *ptr1, *ptr2; /*new is new node, ptr moves along linkedList*/

if (head == NULL)
return (-1);

if (index == 0)
{
i = pop_listint(head);
if (i == -1)
return (-1);
else
return (1);
}

for (ptr1 = *head; index - 1 > 0 && ptr1 != NULL; ptr1 = ptr1->next, index--)
{
}

if (ptr1 == NULL) /*index bigger than list*/
return (-1);
else
{
ptr2 = ptr1->next;
ptr1->next = ptr2->next;
free(ptr2);
return (1);
}
}

/**
 * pop_listint - implenets "pop" funcitonality for listints
 * @head: pointer to start of list
 * Return: popped value
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *hedd = *head;
if (head == NULL || *head == NULL)
return (-1);
n = hedd->n;
hedd = hedd->next;
free(*head);
*head = hedd;
return (n);
}
