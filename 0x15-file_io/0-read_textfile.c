#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a file a prints its content
 * @filename: file location
 * @letters : number of letters inside
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_o, n_r, n_w;
	char *c;

	if (filename == NULL)
		return (0);

	c = malloc(sizeof(char) * letters);

	if (c == NULL)
	{
		return (0);
	}

	n_o = open(filename, O_RDONLY);
	if (n_o == -1)
	{
		free(c);
		return (0);
	}
	n_r = read(n_o, c, letters);
	if (n_r == -1)
	{
		free(c);
		return (0);
	}
	n_w = write(STDOUT_FILENO, c, n_r);
	if (n_w == -1 || n_r != n_w)
	{
		free(c);
		return (0);
	}

	free(c);
	close(n_o);

	return (n_w);
}
