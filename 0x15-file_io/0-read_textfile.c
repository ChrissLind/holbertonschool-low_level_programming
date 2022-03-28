#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 *			standard output.
 *
 * @filename: Pointer to the name of a file.
 * @letters: Number of letters to read and print.
 *
 * Return: Number of letters function is printing.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t r, o, w;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (r == -1 || w == -1 || o == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);

}
