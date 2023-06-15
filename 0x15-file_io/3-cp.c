#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This buffer  Allocates 1024 bytes for a buffer.
 * @file: Name of the file buffer is storing chars for as a file
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - This file closer closes file descriptors.
 * @fd: This is the file descriptor to be closed.
 */
void close_file(int fd)
{
	int g;

	g = close(fd);

	if (g == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This main function Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program of the function
 * @argv: This argu of an array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int start_from;
	int end_to;
	int s;
	int y;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	start_from = open(argv[1], O_RDONLY);
	s = read(start_from, buffer, 1024);
	end_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start_from == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		y = write(end_to, buffer, s);
		if (end_to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		s = read(start_from, buffer, 1024);
		end_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (s > 0);

	free(buffer);
	close_file(start_from);
	close_file(end_to);

	return (0);
}

