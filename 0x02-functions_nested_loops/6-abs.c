#include "main.h"

/**
 * _abs - Computes absolute value of integer
 * @c: integer to be checked
 * Return: 0 Always
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else if (c == 0)
		return (0);
	else
		return (c);
}
