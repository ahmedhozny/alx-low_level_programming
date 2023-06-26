#include "main.h"

/**
 * swap_int - Swaps values of two different variable
 * @a: variable to be swapped
 * @b: variable to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
