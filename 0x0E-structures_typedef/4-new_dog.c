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
	dog_t *mynew;

	mynew = malloc(sizeof(dog_t));

	if (mynew == NULL)
		return (NULL);
	mynew->name = name;
	mynew->age = age;
	mynew->owner = owner;
}
