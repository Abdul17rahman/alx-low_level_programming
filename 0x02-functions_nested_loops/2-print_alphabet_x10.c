#include <unistd.h>

#include "main.h"

/**
* print_alphabet - description check
*
* Descriptions: It print the alphabet in lowercase follow by newline
*
* Returns: nothing
*/

void print_alphabet_x10(void)

{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
