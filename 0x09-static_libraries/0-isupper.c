#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if @c is an uppercase character, 0 otherwise.
 */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
