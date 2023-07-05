#include "main.h"

/**
 * _sqrt_recursion -returns the square root of a given number
 * @n: to calculate square root of n
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (calc(n, 1));
}

/**
 * calc -return the square root of a number
 * @a: number that needs to be square rooted
 * @b: number to be iterated to find the root of @a
 * Return: @b if it is the square root of @a
 */
int calc(int a, int b)
{
	if (b * b > a)
		return (-1);

	if (b * b == a)
		return (b);

	return (calc(a, b + 1));
}
