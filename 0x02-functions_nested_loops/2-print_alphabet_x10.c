#include "main.h"

/**
 * print_alphabet_x10 - This function prints 10 times of alphabets in lowercase
 *
 * return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
