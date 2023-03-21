#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name:name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = NULL;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = name;
	new->owner = owner;
	new->age = age;

	return (new);
}
