#include "main.h"

/**
 * print_last_digit - Finds and returns the last digit of a given number.
 * @n: integer to be checked
 * Return: an integer of the last digit from 0-9.
 */
int print_last_digit(int n)
{
	int r;

	r = (n < 0) ? (n % 10) * -1 : n % 10;

	_putchar(r + '0');

	return (r);
}

