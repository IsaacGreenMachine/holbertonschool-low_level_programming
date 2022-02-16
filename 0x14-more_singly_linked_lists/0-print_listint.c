#include "lists.h"
/**
 * print_listint - prints a listint
 * @h: pointer to head
 *
 * Return: number of nodes in listint
 */

size_t print_listint(const listint_t *h)
{
int count;
for (count = 0; h != NULL; h = h->next, count++)
{
printf("%i\n", h->n);
}
return (count);
}
