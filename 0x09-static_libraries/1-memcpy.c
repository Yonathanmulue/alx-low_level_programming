#include "main.h"
/**
 *_memcpy - is a function that copies a
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: Number of bytes
 *
 *Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int i = n;

	for (; s < i; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
