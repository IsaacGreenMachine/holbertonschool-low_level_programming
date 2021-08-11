#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a listint at a given position
 * @head: start of list
 * @idx: index for node to be inserted
 * @n: value to go in n
 *
 * Return: pointer to new node or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int index = idx; /*keeping value of idx pure*/
listint_t *new, *ptr; /*new is new node, ptr moves along linkedList*/

if (head == NULL)
return (NULL);

if (idx == 0)
return (add_nodeint(head, n)); /*insert at beginning*/

for (ptr = *head; index > 0 && ptr != NULL; ptr = ptr->next, index--)
{
}

if (ptr == NULL && index == 0) /*insert at end*/
return (add_nodeint_end(head, n));

if (ptr == NULL && index > 0) /*index bigger than list*/
return (NULL);

new = malloc(sizeof(listint_t)); /*making new node*/
if (new == NULL)
return (NULL);

new->n = n; /*inserting in between nodes*/
new->next = ptr->next;
ptr->next = new;

return (new);
}
