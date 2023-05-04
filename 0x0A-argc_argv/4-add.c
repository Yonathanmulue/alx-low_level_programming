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
<<<<<<< HEAD
	unsigned int lount;

	lount = 0;
	while (lount < strlen(str))

	{
		if (!isdigit(str[lount]))
=======
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
>>>>>>> a27a2999bacd40d55dd924a42b55b1a41e8e6942
		{
			return (0);
		}

<<<<<<< HEAD
		lount++;
=======
		count++;
>>>>>>> a27a2999bacd40d55dd924a42b55b1a41e8e6942
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
<<<<<<< HEAD

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

=======
	int count;
	int str_to_int;
	int fum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);
			fum += str_to_int;
		}
>>>>>>> a27a2999bacd40d55dd924a42b55b1a41e8e6942
		else
		{
			printf("Error\n");
			return (1);
		}

<<<<<<< HEAD
		lount++;
=======
		count++;
>>>>>>> a27a2999bacd40d55dd924a42b55b1a41e8e6942
	}

	printf("%d\n", fum);

	return (0);
}

