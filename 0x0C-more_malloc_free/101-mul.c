#include <stdlib.h>
#include "main.h"

/**
 * main -multiplies two positive numbers
 * @argc: number of arguments passed
 * @argv: arguments received
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	unsigned int i, n, *x, *y, result;
	char *p;

	if (argc != 3)
	{
		printError();
		exit(98);
	}

	x = parseNumber(argv[1]);
	if (x == NULL)
	{
		printError();
		exit(98);
	}

	y = parseNumber(argv[2]);
	if (y == NULL)
	{
		printError();
		exit(98);
	}

	result = *x * *y;

	if (result == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	for (i = 0; argv[1][i]; i++)
		n++;
	for (i = 0; argv[2][i]; i++)
		n++;

	p = malloc(sizeof(char) * (n + 1));
	for (i = 0; result != 0; i++)
	{
		p[i] = (result % 10) + '0';
		result /= 10;
	}

	while (i)
	{
		_putchar(p[--i]);
	}

	_putchar('\n');

	return (0);
}

/**
 * printError -prints error message
 */
void printError(void){
	char *error = "Error\n";
	int i;

	for (i = 0; error[i] != '\0'; i++)
	{
		_putchar(error[i]);
	}
}

/**
 * isDigit -checks if character passed is a digit
 * @c: character to be checked
 * Return: 1 if digit, 0 otherwise
 */
int isDigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * parseNumber -Returns numeric value of string
 * @s: string to be parsed
 * Return: integer of string given
 */
unsigned int *parseNumber(char *s)
{
	unsigned int *sum, i;

	sum = malloc(sizeof(unsigned int));

	*sum = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isDigit(s[i]))
		{
			free(sum);
			return (NULL);
		}

		*sum = (*sum * 10) + (s[i] - '0');
	}
	return (sum);
}
