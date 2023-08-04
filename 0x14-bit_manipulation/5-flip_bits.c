#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, i = 0;

	x = n ^ m;

	while (x > 0)
	{
		i += (x & 1);
		x >>= 1;
	}

	return (i);
}
