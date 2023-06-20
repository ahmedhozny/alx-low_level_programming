#include "main.h"

/**
 * print_to_98 -Prints all natural numbers until 98 is reached
 * @n: integer the itertions will start from
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

