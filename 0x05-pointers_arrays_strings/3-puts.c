#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string.
 * @s: the string.
 */
void _puts(char *s)
{
	int c = 0;

	while (*s++)
	{
		putchar(*s);
		c++;
	}

	putchar('\n');
}
