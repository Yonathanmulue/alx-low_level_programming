#include <stdio.h>
/**
 * main - this prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void);

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
