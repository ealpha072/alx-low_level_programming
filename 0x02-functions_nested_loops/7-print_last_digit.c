#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: integer to be checked
 * Return: 0 Always
 */

int print_last_digit(int n)
{
	int divisor = n % 10;

	if (divisor < 0)
		divisor += -1;

	_putchar(divisor + '0');

	return (divisor);
}
