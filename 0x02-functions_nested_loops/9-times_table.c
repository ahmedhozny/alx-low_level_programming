#include "main.h"

/**
 * times_table -Prints the first 9 products of timetable from 0 to 9.
 */
void times_table(void);
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

