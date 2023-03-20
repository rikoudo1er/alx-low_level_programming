#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - print a struc dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL && d->owner == NULL)
			printf("Name: (nil)\nAge: %f\nOwner: (nil)\n", d->age);
		else if (d->name == NULL)
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
		else if (d->owner == NULL)
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
		else
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		return;
}
