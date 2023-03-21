#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memories used by the dog (yes :) it's sounds creazy)
 * @d: struct dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
