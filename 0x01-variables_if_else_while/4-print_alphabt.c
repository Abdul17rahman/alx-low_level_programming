#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let == 'e' || let == 'q')
			continue;
		putchar(let);
	}
	putchar('\n');
	return (0);
}
