#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string represents binary number
 *
 * Return: decimal integer, 0 on error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0;

	if (!b)
		return (0);

	for (; *b; b++)
	{
		s <<= 1;
		if (*b == '1')
			s++;
		else if (*b != '0')
			return (0);
	}

	return (s);
}
