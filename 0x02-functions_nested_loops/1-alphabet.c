#include "main.h"

/**
 * main - Main block
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int i;
	for (i = 97; i < 123; i++)
		_putchar((char) i);
	_putchar('\n');
}
