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
	int num3;

	for (num = '0'; num < '9'; num++)
	{
		for (num2 = num + 1; num2 <= '9'; num2++)
		{
			for (num3 = num2 + 1; num3 <= '9'; num3++)
			{
				if ((num != num2) != num3)
				{
					putchar(num);
					putchar(num2);
					putchar(num3);
					if (num == '7' && num2 == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
