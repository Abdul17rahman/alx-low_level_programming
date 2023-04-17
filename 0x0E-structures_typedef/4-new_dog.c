#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function creates a new dog
 * Return: address to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
		return (NULL);
	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;
	return (mydog);
}
