#include "main.h"
#include <stdlib.h>

/**
 * _strdup -returns a pointer to a newly allocated space in memory,
 *          which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: Pointer to array if size > 0 and no errors caught, NULL otherwise.
 */
char *_strdup(char *str)
{
	char *t;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	for (; str[len] != '\0'; len++)
		;

	t = malloc((sizeof(char) * len) + 1);

	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = 0; i < len; i++)
		t[i] = str[i];

	t[len] = '\0';

	return (t);
}
