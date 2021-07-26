#include "dog.h"
#include <stdio.h>
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

/**
 * new_dog - creates a dog with given parameters and passes pointer to dog
 * @name: string for name
 * @age: float for age
 * @owner: string for owner
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t my_dog;
dog_t *ptr = &my_dog;
init_dog(ptr, name, age, owner);
return (ptr);
}
