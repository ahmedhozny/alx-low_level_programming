#include "main.h"

/**
 * _isdigit -checks weather a given character is a digit ftom 0 to 9
 * @c: integer repersentation of the character
 * Return: 1 if @c is digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
