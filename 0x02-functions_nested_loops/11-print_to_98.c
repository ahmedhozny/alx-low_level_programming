#include "main.h"

/**
 * print_to_98 -Prints all natural numbers until 98 is reached
 * @n: integer the itertions will start from
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
	}

	printf("%d\n", n);
}

