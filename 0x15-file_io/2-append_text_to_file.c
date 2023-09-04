#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - Appends text to a file
 * @filename: file location
 * @text_content : content to be written
 *
 * Return: actual number of letters it could read and print
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t n_o, n_w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	n_o = open(filename, O_WRONLY | O_APPEND);
	if (n_o == -1)
		return (-1);

	n_w = write(n_o, text_content, len);
	if (n_w == -1)
		return (-1);

	close(n_o);
	return (1);

}
