#include "main.h"
/**
* _isdigit - Checker main
* Descriptions: the function checks for a digit between 0 to 9
* @c: an input digit
* Return: 1 if c is a digit or 0 otherwise
*/

int _isdigit(int c)
{
	char i = '0';
	int num = 0;

	for (; i <= '9'; i++)
	{
		if (c == i)
			num = 1;
			break;
	}
	return (num);
}
