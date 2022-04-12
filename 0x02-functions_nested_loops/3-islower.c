#include <unistd.h>

#include "main.h"

/**
* _islower - description check
* @c: input t _islower
*
* Descriptions: function _islower checks for lowercase char and returns 1 or 0
*
*Return: (1) if lowercase exists and (0) if it doesnt.
*/

int _islower(int c)
{
	char alpha;
	int num = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
			num = 1;
	}
	return (num);
}
