#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 *
 * @n: function parameter
 *
 * Return: 0 Always (Succeess)
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (n < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
