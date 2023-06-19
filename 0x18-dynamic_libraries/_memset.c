#include "main.h"

/**
 * _memset - fills the memory with a specific value
 * @s: starting address of memory
 * @b: constant byte
 * @n: bytes of memory area to be changed
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
