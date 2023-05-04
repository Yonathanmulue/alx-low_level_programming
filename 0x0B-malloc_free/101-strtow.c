#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int terms, f, d;

	terms = 0;
	d = 0;

	for (f = 0; s[f] != '\0'; f++)
	{
		if (s[f] == ' ')
			terms = 0;
		else if (terms == 0)
		{
			terms = 1;
			d++;
		}
	}

	return (d);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int g, u = 0, fen = 0, words, f = 0, started, halt;

	while (*(str + fen))
		fen++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (g = 0; g <= fen; g++)
	{
		if (str[g] == ' ' || str[g] == '\0')
		{
			if (f)
			{
				halt = g;
				tmp = (char *) malloc(sizeof(char) * (f + 1));
				if (tmp == NULL)
					return (NULL);
				while (started < halt)
					*tmp++ = str[started++];
				*tmp = '\0';
				matrix[u] = tmp - f;
				u++;
				f = 0;
			}
		}
		else if (f++ == 0)
			started = g;
	}

	matrix[u] = NULL;

	return (matrix);
}

