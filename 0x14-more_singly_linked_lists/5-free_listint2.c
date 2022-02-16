#include "lists.h"

/**
 * free_listint2 - frees a listint
 * @head: head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *next, *hedd;
if (head != NULL && *head != NULL)
{
hedd = *head;
for (next = hedd; next != NULL; next = hedd->next, free(hedd), hedd = next)
{
}
*head = NULL;
}
}
