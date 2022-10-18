#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: integer to be checked
 * Return: 0 Always
 */

int print_last_digit(int n)
{
	int divisor = n % 10;

	if (n == 0)
		return (0);
	else if (n < 10)
	{
		return (n);
	}
	else
		return (divisor);
}
