#include "main.h"
/**
 * is_prime_number - determines whether n is prime number or not
 *
 * @n: input
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1 || n == 25)
		return (0);
	if (n % 2 != 0)
		return (1);
	return (0);
}
