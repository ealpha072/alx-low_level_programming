#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char d;

	for (i = '0'; i < '10'; i++)
		putchar(i);
	for (d = 'a'; d < 'g'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
