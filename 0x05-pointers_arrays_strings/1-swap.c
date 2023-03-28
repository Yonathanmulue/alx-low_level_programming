#include "main.h"

/**
 * swap_int - swapint two integers
 * @a: parameter
 * @b:parameter
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
