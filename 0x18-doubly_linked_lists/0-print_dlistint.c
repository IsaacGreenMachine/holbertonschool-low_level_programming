#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @h: head of list
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
int i;
for (i = 0; h != NULL; i++, h = h->next)
printf("%i\n", h->n);
return (i);
}
