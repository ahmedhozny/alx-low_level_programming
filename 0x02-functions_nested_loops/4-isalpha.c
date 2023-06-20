#include "main.h"

/**
 * _isalpha -Tells whether a character is an alphabet
 * @c: character to be checked
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
	return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0);
}

