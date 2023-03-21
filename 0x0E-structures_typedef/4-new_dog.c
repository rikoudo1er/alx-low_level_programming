#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copy the string.
 * @src: string to copy
 * Return: string copied
 */


char *_strcpy(char *src)
{
	int i = 0, len = 0;
	char *dest = NULL;

	if (src == NULL)
		return (NULL);

	for (; src[len] != '\0'; len++)
		;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name:name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new struct dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *new_name = NULL, *new_owner = NULL;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new_name = _strcpy(name);
	if ((new_name) == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = new_name;

	new_owner = _strcpy(owner);
	if ((new_owner) == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->owner = new_owner;
	new->age = age;

	return (new);
}
