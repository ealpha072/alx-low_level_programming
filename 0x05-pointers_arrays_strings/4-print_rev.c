#include "main.h"

/**
 * print_rev - prints str in reverse
 * @s: str to print
 * Return: void
 */

void print_rev(char *s)
{
	int last_index;
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (s[i] > 0)
		_putchar(s[i]);
		i--;
	_putchar('\n');
}
