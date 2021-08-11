#include "lists.h"
/**
 * sum_listint - sums all ints in a listint
 * @head: start of listint
 * Return: sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
int sum;
for (sum = 0; head != NULL; head = head->next)
{
sum += head->n;
}
return (sum);
}
