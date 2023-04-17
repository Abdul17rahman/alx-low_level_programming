#include "dog.h"

/**
 * init_dog - initializes the dog variables
 * @d: pointer to the struct
 * @name: the variable name of the dog
 * @age: variable age of the dog
 * @owner: variable owner of the dog
 *
 * Description: This function initializes the members of the dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
	free(d);
}
