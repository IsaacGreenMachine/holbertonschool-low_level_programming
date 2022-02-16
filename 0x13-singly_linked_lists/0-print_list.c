#include "lists.h"

/**
 * print_list - prints contents of a singly linked list.
 * @h: pointer to a linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
int count;
if (h == NULL)
return (0);
for (count = 0; h != NULL; h = h->next, count++)
{
if (h->str == NULL)
printf("[%i] %s\n", 0, "(nil)");
else
printf("[%i] %s\n", h->len, h->str);
}
return (count);
}
