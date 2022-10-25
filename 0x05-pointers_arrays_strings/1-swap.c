#include "main.h"

/**
 * swap_int - swaps values of two integeres
 * @a:first int
 * @b:first int
 *
 * Return: void on success
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
