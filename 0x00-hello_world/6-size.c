#include <stdio.h>

/**
 * main - determines to print the size of various data types.
 *
 * Replace: Always 0 (Success)
 *
 */
int main(void)
{
	char charType;
	int integerType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %ld bytes\n", sizeof(charType));
	printf("Size of a int: %ld bytes\n", sizeof(integerType));
	printf("Size of a long int: %ld bytes\n", sizeof(longintType));
	printf("Size of a long long int: %ld bytes\n", sizeof(longlongintType));
	printf("Size of a float: %ld bytes\n", sizeof(floatType));

	return (0);
}
