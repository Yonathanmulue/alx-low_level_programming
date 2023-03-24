#include "main.h"

/**
 * _isdigit - checks if c is a digit
 *
 * @c: parameter to be printed
 * Return: 1 if ture else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
