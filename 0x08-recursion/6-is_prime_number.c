#include "main.h"

/**
 * is_prime_number -checks whether a number is prime
 * @n: integer to be tested
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	return (calc_prime(n, 2));
}

/**
 * calc_prime -checks whether a number is prime
 * @a: number to be checked
 * @b: number to be iterated to find if @a is prime
 * Return: 1 if @n is prime, 0 otherwise.
 */
int calc_prime(int a, int b)
{
	if (a <= 2)
		return ((a == 2) ? 1 : 0);
	if (a % b == 0)
		return (0);
	if (b * b > a)
		return (1);

	return (calc_prime(a, b + 1));
}
