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
	for (last_index = i; last_index <= 0; last_index--)
	{
		_putchar(s[last_index]);
	}
	_putchar("\n");
}
