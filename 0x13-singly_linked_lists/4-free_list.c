#include "lists.h"
/**
 * free_list - frees a linkedList
 * @head: pointer to head of linkedList
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *dup;
if (head == NULL)
return;
for (; head->next != NULL; head = dup)
{
dup = head->next;
free(head->str);
free(head);
}
free(head->str);
free(head);
}
