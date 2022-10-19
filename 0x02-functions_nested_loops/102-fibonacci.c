#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int fib_sequence[50];

	fib_sequence[0] = 0;
	fib_sequence[1] = 1;

	for (i = 2; i < 50; i++)
	{
		fib_sequence[i] = fib_sequence[i - 1] + fib_sequence[i - 2];
		printf("%ld, ", fib_sequence[i]);
	}
	printf("\n");
}
