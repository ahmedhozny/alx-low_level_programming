#include "main.h"

/**
 * print_times_table -Prints the first n products of timetable from 0 to n.
 * @n: number of iterations 
 */
void print_times_table(int n)
{

	int i, j, k;

	if (n > 12)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;
			if (k < 10)
				_putchar(' ');
			else
				_putchar(k / 10 + '0');

			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}

