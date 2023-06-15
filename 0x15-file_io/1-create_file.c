#include "main.h"

/**
 * create_file - This file uses to creates a file.
 * @filename: This is a  pointer to the name of the file to create
 * @text_content: We use this as a  pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int led, u;
	int les = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (les = 0; text_content[les];)
			les++;
	}

	led = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	u = write(led, text_content, les);

	if (led == -1 || u == -1)
		return (-1);

	close(led);

	return (1);
}

