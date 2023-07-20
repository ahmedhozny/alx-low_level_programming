#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings -function that prints strings
 * @separator: string to separate the printed numbers
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		s = va_arg(args, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if ((i != n) && (separator != NULL))
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
