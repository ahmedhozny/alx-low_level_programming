#include "main.h"

/**
 * factorial -returns the factorial of a given number
 * @n: to calculate n!
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return ((n == 0) ? 1 : (n * factorial(n - 1)));
}
