#include <stdio.h>
#include <unistd.h>

/**
 * main - program prints output to standard error
 * Description: Takes in arguments and prints an error
 * Return: main return 1 as an error
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
