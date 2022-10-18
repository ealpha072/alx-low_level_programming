#include <unistd.h>

/**
 * _putchar - writes the char c to sdtout
 * @c: The charecter to print
 *
 * Return: On Success 1.
 * On error, -1 is returned, and errno is set temporarily
 */

int _putchar(char c)
{
	return (write(1, &c, 1))
}
