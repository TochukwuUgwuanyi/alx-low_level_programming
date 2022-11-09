#include <stdio.h>
#include <stdlib.h>
/**
 * main -adds two number&prints result
 * @argc:  contain exactly two numbers of argument
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */

int main (int argc, char *argv[])
{
	int	a, b;

	if (argc != 3) 
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf ("%d\n", a + b);
	return (0);
}
