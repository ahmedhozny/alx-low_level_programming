#include "main.h"
#include <stdlib.h>

/**
 * create_file - Creates a file and puts content into it
 * @filename: file location
 * @text_content : content to be written
 *
 * Return: actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t n_o, n_w;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	n_o = open(filename, O_CREAT | O_TRUNC | O_RDWR, 600);
	if (n_o == -1)
		return (-1);

	n_w = write(n_o, text_content, len);
	if (n_w == -1)
		return (-1);

	close(n_o);
	return (1);
}
