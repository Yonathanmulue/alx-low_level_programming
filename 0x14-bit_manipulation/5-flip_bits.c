#include "main.h"

/**
 * flip_bits - This function counts the number of bits to change
 * @n: The first number
 * @m: The second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (f = 63; f >= 0; f--)
	{
		current = exclusive >> f;
		if (current & 1)
			count++;
	}

	return (count);
}

