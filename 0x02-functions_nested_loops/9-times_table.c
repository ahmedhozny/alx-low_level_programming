#include "main.h"

/**
 * main - Main block
 *
 * Return: Always 0.
 */
void jack_bauer(void);
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k >= 10)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

