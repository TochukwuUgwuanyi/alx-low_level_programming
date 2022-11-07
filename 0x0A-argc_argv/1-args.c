#include "main.h"
#include <stdio.h>
/**
 * main - program prints its own name
 * @argc:  contains total number of argument
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
