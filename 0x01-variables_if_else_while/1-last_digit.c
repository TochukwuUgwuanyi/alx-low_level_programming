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
	int n, a, b, c;

	srand(time(0));
	a = 8;
	b = 5;
	c = 0;
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,a);
	} else if (n < 6 && != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not %d\n", n,b,c);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n,c);
	}
	return (0);
}
