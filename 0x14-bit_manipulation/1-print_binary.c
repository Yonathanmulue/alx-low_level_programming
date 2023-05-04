#include "main.h"

/**
 * print_binary - This function  prints the binary equivalent of a decimal number
 * @n: We use this  number to print in binary
 */
void print_binary(unsigned long int n)
{
	int h, counter = 0;
	unsigned long int current;

	for (h = 63; h >= 0; h--)
	{
		current = n >> h;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}

