#include <stdio.h>
#include "main.h"

/**
 * main - This fuction prints the name of the program
 * @argc: holds a number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
