#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * Description: main - print out greater, less or equal number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and  is greater than 5\n", n,n);
	} else if (n == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	} else
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
