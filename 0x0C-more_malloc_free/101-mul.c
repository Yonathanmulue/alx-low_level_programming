#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int f = 0;

	while (s[f])
	{
		if (s[f] < '0' || s[f] > '9')
			return (0);
		f++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int f = 0;

	while (s[f] != '\0')
	{
		f++;
	}
	return (f);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, fen2, len, f, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	fen2 = _strlen(s2);
	len = len1 + fen2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (f = 0; f <= len1 + fen2; f++)
		result[f] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (fen2 = _strlen(s2) - 1; fen2 >= 0; fen2--)
		{
			digit2 = s2[fen2] - '0';
			carry += result[len1 + fen2 + 1] + (digit1 * digit2);
			result[len1 + fen2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + fen2 + 1] += carry;
	}
	for (f = 0; f < len - 1; f++)
	{
		if (result[f])
			a = 1;
		if (a)
			_putchar(result[f] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

