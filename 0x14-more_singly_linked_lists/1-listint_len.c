#include "lists.h"
/**
 * listint_len - returns length of a listint.
 * @h: pointer to head
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
int count;
for (count = 0; h != NULL; h = h->next, count++)
{
}
return (count);
}
