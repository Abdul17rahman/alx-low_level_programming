#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is the number to be checked
 *
 * Description: This function uses modulo to get the last digit
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	return (digit);
}
