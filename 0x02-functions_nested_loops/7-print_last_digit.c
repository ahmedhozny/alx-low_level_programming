#include "main.h"

/**
 * main - Main block
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	return ((n < 0) ? 10 - n % 10 : n % 10);
}

