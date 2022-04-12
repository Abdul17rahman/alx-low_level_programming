#include <unistd.h>

#include "main.h"

/**
* _isalpha - description check
* @c: input _isalpha
*
* Descriptions:_isalpha checks for lowercase,uppercase char and returns 1 or 0
*
*Return: (1) if lowercase or upper or letter exists and (0) if it doesnt.
*/

int _isalpha(int c)
{
	char alpha, upper;
	int num = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (alpha == c || upper == c)
				num = 1;
		}
	}
	return (num);
}
