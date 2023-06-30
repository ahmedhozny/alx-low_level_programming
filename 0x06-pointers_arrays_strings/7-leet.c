#include "main.h"

/**
 * leet -encodes string given so it would look like that "3nc0d3s s7ring"
 * @s: string to be encoded
 *
 * Return: pointer to @s
 */
char *leet(char *s)
{
	const char letters[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	const char values[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = values[j / 2];
				break;
			}
		}
	}

	return (s);
}
