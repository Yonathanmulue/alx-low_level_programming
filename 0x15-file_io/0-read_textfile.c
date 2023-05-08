#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This function Reads text files print to STDOUT.
 * @filename: we use this text file being read
 * @letters: the actual numberss of letters to be read
 * Return: w- actual number of bytes to read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t lit;
	ssize_t f;
	ssize_t y;

	lit = open(filename, O_RDONLY);
	if (lit == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(lit, buf, letters);
	f = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(lit);
	return (f);
}

