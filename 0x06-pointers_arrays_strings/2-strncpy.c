#include "main.h"

/**
 * _strncpy -copies string to given parameter
 * @dest: string to be appended
 * @src: string that will merge with @dest
 * @n: the length of string
 * Return: pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
