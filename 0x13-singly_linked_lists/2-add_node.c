#include "lists.h"
/**
 * add_node - adds a node to the top of a linked list
 * @head: address of head of linked list
 * @str: string to be put in "str" member of node
 *
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL || head == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
return (NULL);
new->next = *head;
new->len = (strlen(str));
*head = new;
return (new);

/*what if strdup fails? (what if it returns NULL?*/
}
