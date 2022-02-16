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
new->next = *head;
*head = new;
return (new);

/*what if strdup fails? (what if it returns NULL?*/
}
