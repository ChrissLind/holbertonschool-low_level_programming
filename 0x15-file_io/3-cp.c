#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * make_buffer - Creates a buffer for main function to use.
 * @file: Name of the file for buffer.
 *
 * Return: The buffer.
 */
char *make_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * f_close - Function for closing files.
 *
 * @fd: File descriptor.
 *
 * Return: 0
 */
void f_close(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of another file.
 *
 * @argc: Arguments being passed.
 * @argv: Array of pointers to arguments.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r, w, optrun, opfrom;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buffer(argv[2]);
	optrun = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	opfrom = open(argv[1], O_RDONLY);
	r = read(opfrom, buffer, 1024);

	do {
		if (opfrom == -1 || r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(optrun, buffer, r);
		if (optrun == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(opfrom, buffer, 1024);
		optrun = open(argv[2], O_APPEND | O_WRONLY);

	} while (r > 0);

	free(buffer);
	f_close(opfrom);
	f_close(optrun);

	return (0);
}
