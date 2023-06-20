#include "main.h"

/**
 * _islower - Tells whether a character is lower or not
 * @c: character to be checked
 * Return: 1 or 0
 */
int _islower(int c)
{
	return ((c >= 97 && c <= 123) ? 1 : 0);
}

