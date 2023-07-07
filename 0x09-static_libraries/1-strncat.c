#include "main.h"

/**
 * _strncat -concatenates two given strings
 * @dest: string to be appended
 * @src: string that will merge with @dest
 * @n: the length of string
 *
 * Return: pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (i = 0; src[i] != '\0' && n != 0; i++)
	{
		dest[len++] = src[i];
		n--;
	}
	dest[len] = '\0';

	return (dest);
}
