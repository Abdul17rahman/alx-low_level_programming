#include "main.h"

/**
 * _isdigit - checks if the char is a digit
 * @c: c is the character int represantation that is checked
 *
 * Description: This function checks if c is a digit
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
