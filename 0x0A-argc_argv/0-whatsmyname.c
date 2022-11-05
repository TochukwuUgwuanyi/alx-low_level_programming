#include "main.h"
#include <stdio.h>
/**
 * main -used to fill memory with particular value
 * @argc:  contains total number of argument/parameter
 * @*argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
