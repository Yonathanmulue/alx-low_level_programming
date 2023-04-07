#include "main.h"
/**
 * factorial - determines the factorial of n
 * @n: parameter
 * Return: 0 Success
 *
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
