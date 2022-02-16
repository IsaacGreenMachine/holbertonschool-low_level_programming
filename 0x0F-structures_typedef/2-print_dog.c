#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints out values for passed dog struct
 * @d: passed dog struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
d->name = "(nil)";
}
if (d->age < 0)
{
d->age = -1;
}
if (d->owner == NULL)
{
d->owner = "(nil)";
}
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
