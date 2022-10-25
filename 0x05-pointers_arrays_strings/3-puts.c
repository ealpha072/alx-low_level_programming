#include "main.h"

/**
 * _puts - prints string
 * @str: string to print
 * Return: Void
 */

void _puts(char *str)
{
	int str_len = 0;

	while (str[str_len] != '\0')
	{
		_putchar(str[str_len]);
		str_len++;
	}
	_putchar('\n');
}
