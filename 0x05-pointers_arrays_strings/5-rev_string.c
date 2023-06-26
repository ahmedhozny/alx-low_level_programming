#include "main.h"
#include <stdio.h>

/**
 * rev_string ->  reverses the given string.
 * @s: the string needed to be reversed.
 */
void rev_string(char *s)
{
	int i, j, length;
	char temp;

	length = 0;
	while (s[length] != '\0')
		length++;

	j = length - 1;
	for (i = 0; i < length && j >= 0 && i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

