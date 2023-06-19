#include "main.h"
/**
 * _abs - computes the absolute value of an int
 * @c: a parameter to be printed
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c < 0)
		c = -(c);
	else if (c >= 0)
		c = c;
	return (c);
}
