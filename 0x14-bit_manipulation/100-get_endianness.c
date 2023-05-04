#include "main.h"

/**
 * get_endianness - gets endinness
 *
 * Description: Uses an if
 * Return: 1 if little and 0 if big endian
 */

int get_endianness(void)
{
	int a;
	char *c;

	a = 1;
	c = (char *)&a;
	return (*c);
}
