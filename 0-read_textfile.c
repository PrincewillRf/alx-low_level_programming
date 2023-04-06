#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openn, readd, writee;
	char *bufferr;

	if (filename == NULL)
		return (0);

	bufferr = malloc(sizeof(char) * letters);
	if (bufferr == NULL)
		return (0);

	openn = open(filename, O_RDONLY);
	readd = read(o, buffer, letters);
	writee = write(STDOUT_FILENO, buffer, r);

	if (openn == -1 || readd == -1 || writee == -1 || writee != readd)
	{
		free(bufferr);
		return (0);
	}

	free(bufferr);
	close(openn);

	return (writee);
}
