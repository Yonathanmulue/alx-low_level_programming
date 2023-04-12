#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size and intializes char c
 * @c: parameter
 * @size: size of array
 * Description: Create array of size and assign character c
 * Return: pointer to array, if fail NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);

}
