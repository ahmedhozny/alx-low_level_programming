#include "main.h"

/**
 * print_sign -Checks the number and determine (positive, negative, or a zero)
 * @n integer to be checked
 * Return: 1 or 0 or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}

