#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 number and prints result
 * @argc:  contains exactly 2 numbers of argument
 * @argv: argument vectors
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return 0;
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
