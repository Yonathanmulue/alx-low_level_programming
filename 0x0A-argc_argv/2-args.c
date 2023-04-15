#include <stdio.h>
#include "main.h"

/**
 * main - This function prints all arguments it receives
 * @argc: This holds the number of arguments
 * @argv: This is an array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
