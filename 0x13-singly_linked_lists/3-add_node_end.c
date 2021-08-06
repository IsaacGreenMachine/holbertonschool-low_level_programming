#include "lists.h"
/**
 * add_node_end - adds a node to the end of a linkedlist
 * @head: start of linked list
 * @str: value to go into the node inserted
 * Return: address of node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *last;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
last = *head;
if (last != NULL)
{
while (last->next != NULL)
{
last = last->next;
}
last->next = new;
}
else
*head = new;
if (str == NULL)
{
new->str = NULL;
new->len = 0;
}
else
{
new->str = strdup(str);
new->len = (strlen(str));
}
new->next = NULL;
return (new);
}
