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
	int n, a;

	srand(time(0));
	a = 0;
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (a > 8)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	} else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
