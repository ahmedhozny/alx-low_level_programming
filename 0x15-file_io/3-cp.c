#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * validate97 - Validates number of arguments and exits if mismatched
 * @argc: number of arguments
 */
void validate97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * validate98 - Validates file being copied can be opened and read
 * @filename: name of the file
 * @n: result of file handle
 */
void validate98(char *filename, ssize_t n)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * validate99 - Validates targeted file can be opened and modified
 * @filename: name of the file
 * @n: result of file handle
 */
void validate99(char *filename, ssize_t n)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * validate100 - Validates closed file is handled successfully
 * @n: result of closing attempt handle
 * @fd: file handle
 */
void validate100(ssize_t n, int fd)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Main block
 * @argc: number of arguments given
 * @argv: the arguments given
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	ssize_t file_from, file_to;
	int lenr, lenw;
	char c[1024];
	mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	validate97(argc);
	file_from = open(argv[1], O_RDONLY);
	validate98(argv[1], file_from);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, file_perm);
	validate99(argv[2], file_to);
	do {
		lenr = read(file_from, c, 1024);
		validate98(argv[1], lenr);
		lenw = write(file_to, c, lenr);
		validate99(argv[2], (lenr != lenw) ? -1 : lenw);
	} while (lenr == 1024);
	validate100(close(file_from), file_from);
	validate100(close(file_to), file_to);

	return (0);
}
