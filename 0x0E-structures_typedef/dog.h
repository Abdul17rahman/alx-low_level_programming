#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Defines a dog
 * @name: name of the dog char*
 * @age: Age of the dog float
 * @owner: name of the owner char*
 *
 * Description: This struct defines a custom dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}, dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
