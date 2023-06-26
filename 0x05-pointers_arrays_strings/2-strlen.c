#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check.
 * Return: 0 is success.
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s++)
		c++;
	return (c);
}
