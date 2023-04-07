#include "main.h"
#include <math.h>
/**
 * _pow_recursion - prints the value of x raised to the power of y
 * @x: Value of x
 * @y: Value of y
 * Return: -1 if true
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
