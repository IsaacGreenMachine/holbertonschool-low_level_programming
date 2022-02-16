#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
dog_t *dawg;
dawg = malloc(sizeof(dog_t));
if (dawg == NULL)
{
return (NULL);
}
dawg->name = strdup(name);
if (dawg->name == NULL)
{
free(dawg);
return (NULL);
}
dawg->owner = strdup(owner);
if (dawg->owner == NULL)
{
free(dawg);
free(dawg->name);
return (NULL);
}
dawg->age = age;
return (dawg);
}
