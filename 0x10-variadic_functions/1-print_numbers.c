#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -prints numbers, followed by a new line
 * @separator: string to separate the printed numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(args, int));
		if ((i != n) && (separator != NULL))
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
