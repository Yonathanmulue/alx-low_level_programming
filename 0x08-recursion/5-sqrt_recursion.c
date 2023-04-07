#include "main.h"
/**
 * _sqrt_recursion - prints the square root of a n
 * @n: parameter
 * @s: paramater
 * Return: 0 Always success
 */
int natural_sqrt_recursion(int n, int s);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - determines to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @s: parameter
 * Return: the resulting square root
 */
int natural_sqrt_recursion(int n, int s)
{
	if (s * s > n)
		return (-1);
	if (s * s == n)
		return (s);
	return (natural_sqrt_recursion(n, s + 1));
}

