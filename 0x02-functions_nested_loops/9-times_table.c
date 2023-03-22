#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 times table starting from 0
 * Description: Uses nested for loops to print
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", j * i);
			if (j < 9)
			{
				printf("  ,");
			}
		}
		printf("$");
		printf("\n");
	}
}
