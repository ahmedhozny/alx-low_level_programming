#include "main.h"
#include <stdio.h>

/**
 * _strcpy -copies a string into another string variable.
 * @dest: array to receive the copied characters from @src
 * @src: array to be copied
 *
 * Return: pointer of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
