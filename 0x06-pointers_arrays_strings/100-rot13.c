#include "main.h"

/**
 * rot13 -encodes a string using rot13
 * @s: string to be rotated
 * Return: pointer to @s
 */
char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}