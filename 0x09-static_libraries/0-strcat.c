#include "main.h"

/**
 * _strcat -concatenates two given strings
 * @dest: string to be appended
 * @src: string that will merge with @dest
 *
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (i = 0; src[i] != '\0'; i++)
		dest[len++] = src[i];
	dest[len] = '\0';

	return (dest);
}
