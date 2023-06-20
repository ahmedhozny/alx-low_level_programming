#include "main.h"

/**
 * main - Main block
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		do
			printf("%d", n--);
		while (n >= 98);
	else
	{
		do
			printf("%d", n++);
		while (n <= 98);
	}
}

