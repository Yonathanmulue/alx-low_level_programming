#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - explains if the last digit is 0,greater than 5,or less than 6 not 0.
 *
 * Return: Always 0 (Success)
 */

 /* betty style doc for function main goes there */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if
		(last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if
		(last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if
		(last_digit < 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit);
	}
	/* your code goes there */
	return (0);
}