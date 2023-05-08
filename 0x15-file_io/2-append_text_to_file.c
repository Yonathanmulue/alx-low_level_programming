#include "main.h"

/**
 * append_text_to_file - We use this to Appends text at the end of a file.
 * @filename: A final pointer to the name of the file.
 * @text_content: This is the strings to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int length = 0;
	int d;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	d = write(a, text_content, length);

	if (a == -1 || d == -1)
		return (-1);

	close(a);

	return (1);
}

