#include "main.h"

/**
 * get_bit - We use this function to return
 * the value of a bit at an index in a decimal number
 * @n: The numbers parameter to search
 * @index: This is the index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}

