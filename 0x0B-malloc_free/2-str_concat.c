#include "main.h"
#include <stdlib.h>

/**
 * str_concat -concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to array if size > 0 and no errors caught, NULL otherwise.
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	int i, j, len;

	len = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len++;

	t = malloc((sizeof(char) * len) + 1);
	if (len == 0 || t == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0' && i < len; i++)
		t[i] = s1[i];

	for (j = 0; s2[j] != '\0' && i < len; i++, j++)
		t[i] = s2[j];

	t[len] = '\0';
	return (t);
}
