#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - prints the value of x raised to the power of y
 * @x: Value of x
 * @y: Value of y
 * @r: integer
 * Return: -1 if true
 */
int _pow_recursion(int x, int y)
{
	int r;

	if (y < 0)
		return (-1);
	r = pow(x, y);
	return (r);
}
