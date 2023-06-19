#include "main.h"

/**
 * _isupper - checks if the char is uppercase
 * @c: c is the character int represantation that is checked
 *
 * Description: This function check the uppercase chars
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
