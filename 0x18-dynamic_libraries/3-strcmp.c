#include "main.h"

/**
 * _strcmp - compares to strings
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 * Return: number represents which is bigger and by how much.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	if (*s1 == *s2)
		return (0);

	return (s1[i] - s2[i]);
}
