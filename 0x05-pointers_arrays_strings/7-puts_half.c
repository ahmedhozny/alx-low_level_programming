#include "main.h"
#include <stdio.h>

/**
 * puts_half -prints the last half of a given string.
 * @str: the given string
 */
void puts_half(char *str)
{
	int len, n;

	len = 0;
	while (str[len] != '\0')
		len++;

	n = (len % 2 == 0) ? len / 2 : (len - 1) / 2;

	for (; n < len; n++)
		putchar(str[n]);

	putchar('\n');
}
