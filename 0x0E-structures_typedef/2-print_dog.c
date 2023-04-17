#include "dog.h"

/**
 * print_dog - Prints the struct
 * @d: pointer to the struct
 *
 * Description: This function prints the members of dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Onwer: (nil)\n");
	else
		printf("Onwer: %s\n", d->owner);
}
