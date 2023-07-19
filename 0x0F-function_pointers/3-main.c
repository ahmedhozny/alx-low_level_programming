#include "3-calc.h"
#include <stdio.h>

/**
 * main - Main block
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *o, *e = "Error\n";
	int a, b;

	if (argc != 4)
	{
		printf("%s",e);
		exit(98);
	}

	a = atoi(argv[1]);
	o = argv[2];
	b = atoi(argv[3]);

	if (!get_op_func(o) || (o[1] != '\0'))
	{
		printf("%s",e);
		exit(99);
	}

	if (((o[0] == '/') || (o[0] == '%')) && (b == 0))
	{
		printf("%s",e);
		exit(100);
	}

	printf("%d\n", get_op_func(o)(a, b));
	return (0);
}
