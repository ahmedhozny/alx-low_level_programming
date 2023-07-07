#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main -finds the number of coins needed for change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, x, n;
	int const coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < (int)strlen(argv[1]); i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}

	x = atoi(argv[1]);

	i = 0;
	n = 0;
	while (x > 0)
	{
		if (x - coins[i] < 0)
		{
			i++;
			continue;
		}

		x -= coins[i];
		n++;
	}

	printf("%d\n", n);
	return (0);
}