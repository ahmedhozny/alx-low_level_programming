#include "main.h"

/**
 * _strlen_recursion -returns the length of a given string
 * @s - String to be measured
 * Return: length of the given string
 */
int _strlen_recursion(char *s)
{
	return ((*s == '\0') ? 0 : (1 + _strlen_recursion(s + 1)));
}
