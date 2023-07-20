#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all -function that prints strings
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, flag = 0;
	char *str, *sep = "";

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				flag = 1;
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				flag = 1;
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				flag = 1;
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(nil)";

				printf("%s%s", sep, str);
				flag = 1;
		}

		if (flag == 1)
			sep = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
