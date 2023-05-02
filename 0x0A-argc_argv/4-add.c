#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int lount;

	lount = 0;
	while (lount < strlen(str))

	{
		if (!isdigit(str[lount]))
		{
			return (0);
		}

		lount++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int lount;
	int str_to_int;
	int fum = 0;

	lount = 1;
	while (lount < argc)
	{
		if (check_num(argv[lount]))

		{
			str_to_int = atoi(argv[lount]);
			fum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		lount++;
	}

	printf("%d\n", fum);

	return (0);
}

