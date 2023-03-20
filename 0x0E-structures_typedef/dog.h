#ifndef __DOG__H
#define __DOG__H

/**
 * struct dog - basic structures describing a dog
 * @name: the name of dog
 * @age: age of dog
 * @owner:owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new name for type struct dog
 */
typedef struct dog dog_t;
#endif
