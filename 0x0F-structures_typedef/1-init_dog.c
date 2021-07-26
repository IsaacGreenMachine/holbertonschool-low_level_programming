#include "dog.h"
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
d->name = name;
d->age = age;
d->owner = owner;
}
