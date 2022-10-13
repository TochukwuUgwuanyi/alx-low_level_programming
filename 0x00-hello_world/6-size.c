#include <stdio.h>
/**
 * main - Prints out the sizes of various data types on the computer
 * Gives out datatypes byte
 * Return: 0 if success.
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
