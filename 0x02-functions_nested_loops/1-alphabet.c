#include <unistd.h>

#include "main.h"

/**
* print_alphabet - description check
*
* Descriptions: It print the alphabet in lowercase follow by newline
*
* Returns: nothing
*/

void print_alphabet(void)

{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
