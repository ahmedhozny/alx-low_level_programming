#include "main.h"
#include <stdio.h>

/**
 * print_rev -Prints a string in reverse.
 * @s: the string to be operated
 */

void print_rev(char *s)
{
	int i, c;

	c = 0;

	while (s[c] != '\0')
		c++;

	for (i = c - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
