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
	int num;
	int num2;

	for (num = '0'; num <= '9'; num++)
	{
		for (num2 = num + 1; num2 <= '9'; num2++)
		{
			if (num != num2)
			{
				putchar(num);
				putchar(num2);
				if (num == '8' && num2 == '9')
					continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
