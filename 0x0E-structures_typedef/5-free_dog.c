#include "dog.h"

/**
 * free_dog - frees a pointer
 * @d: pointer to the struct
 *
 * Description: This function free dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
