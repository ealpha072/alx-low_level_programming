#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int fib_sequence[52];

	fib_sequence[0] = 0;
	fib_sequence[1] = 1;

	for (i = 2; i < 52; i++)
	{
		fib_sequence[i] = fib_sequence[i - 1] + fib_sequence[i - 2];
		if (i == 51)
		{
			printf("%ld", fib_sequence[i]);
		}
		else
			printf("%ld, ", fib_sequence[i]);
	}
	printf("\n");

	return (0);
}
