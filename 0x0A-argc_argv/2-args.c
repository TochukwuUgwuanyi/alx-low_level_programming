#include <stdio.h>
/**
 * main - program prints out arguments passed to it.
 * @argc:  contains total number of argument
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
