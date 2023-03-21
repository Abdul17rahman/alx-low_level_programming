#include <stdio.h>

/**
 * _islower - checks if the char is lowercase
 * @c: c is the character int represantation that is checked
 *
 * Description: This function check the lowercase chars
 * Return: 1 if true and 0 if false 
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
