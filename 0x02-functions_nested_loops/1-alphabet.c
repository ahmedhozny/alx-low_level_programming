#include "main.h"

/**
 * print_alphabet -Prints alphabets from a to z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar((char) i);
	_putchar('\n');
}
