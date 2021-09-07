#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
int i;
for(i = 0; h != NULL; i++, h = h->next)
{
}
return(i);
}
