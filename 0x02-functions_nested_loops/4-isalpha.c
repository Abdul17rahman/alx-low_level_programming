#include <stdio.h>

/**
 * _isalpha - checks if the char is alphabetic
 * @c: c is the character int represantation that is checked
 *
 * Description: This function check c is an alphabetic char
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
