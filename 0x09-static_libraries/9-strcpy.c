#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: Source string
 * @n: byte size
 *
 * Description: This function copies a string
 * Return: a pointer to the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
