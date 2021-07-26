#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes passed values for dog
 * @d: struct
 * @name: string for name
 * @age: float for age
 * @owner: string for owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
if (name != NULL)
{
d->name = name;
}
if (age >= 0)
{
d->age = age;
}
if (owner != NULL)
{
d->owner = owner;
}
}
}
