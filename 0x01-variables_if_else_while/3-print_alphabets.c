#include <stdio.h>
#include <ctype.h>

/**
 * main -Main Block
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alpha[i]);
	for (i = 0; i < 26; i++)
		putchar(toupper(alpha[i]));
	putchar('\n');
	return (0);
}
