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
	ssize_t op, rr, ww;
	char *bufferr;

	if (filename == NULL)
		return (0);

	bufferr = malloc(sizeof(char) * letters);
	if (bufferr == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rr = read(op, buffer, letters);
	ww = write(STDOUT_FILENO, buffer, rr);

	if (op == -1 || rr == -1 || ww == -1 || ww != rr)
	{
		free(bufferr);
		return (0);
	}

	free(bufferr);
	close(oo);

	return (ww);
}
