#include "main.h"
#include <stdio.h>

/**
 * _atoi -convert string to number if valid.
 * @s: string to be converted
 *
 * Return: parsed integer
 */
int _atoi(char *s)
{
	int i, negative, flag;
	unsigned int num = 0;

	negative = 1;
	flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && !flag)
		{
			negative = -negative;
			continue;
		}

		if ((s[i] == '+' && !flag) || s[i] == ' ')
			continue;

		if (s[i] < 48 || s[i] > 57)
		{
			if (!flag)
				continue;
			break;
		}

		num = num * 10 + (s[i] - '0');
		flag = 1;
	}

	return (negative * num);

}
