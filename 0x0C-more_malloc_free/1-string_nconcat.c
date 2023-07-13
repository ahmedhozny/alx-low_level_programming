#include <stdlib.h>

/**
 * string_nconcat -concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: maximum length of @s2
 * Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	i = j = 0;
	if (s1 != NULL)
	{
		for (; s1[i] != '\0'; i++)
			;
	}

	if (s2 != NULL)
	{
		for (; s2[j] != '\0' && j < n; j++)
			;
	}

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (; k < i + j; k++)
		s[k] = s2[k - i];

	s[i + j] = '\0';

	return (s);
}
