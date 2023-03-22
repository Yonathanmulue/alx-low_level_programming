#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: parameter to be printed
 *
 * Return: 1 if true, otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
