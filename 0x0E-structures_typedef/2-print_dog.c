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
		printf("\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %lf\n", d->age);
	if (d->owner == NULL)
		printf("Onwer: (nil)\n");
	else
		printf("Onwer: %s\n", d->owner);
}
