#include "main.h"

/**
 * binary_to_uint - This function  converts a binary number to unsigned int
 * @b: We use this parameter string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int dec_value = 0;

	if (!b)
		return (0);

	for (g = 0; b[g]; g++)
	{
		if (b[g] < '0' || b[g] > '1')
			return (0);
		dec_value = 2 * dec_value + (b[g] - '0');
	}

	return (dec_value);
}

