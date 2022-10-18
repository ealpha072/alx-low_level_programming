#include "main.h"

/**
 * print_alphabet_x10 - prints a-z 10 times
 *
 * Return: 0 Success
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

