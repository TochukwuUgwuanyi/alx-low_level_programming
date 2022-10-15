#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * Description: main - print out postive or negative value
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */
	if( n < 0 ) {
		
		printf("%d\n is positive",n);
	
	} else if( n == 0) {

		printf("n is zero\n");
	
	} else

	{
		printf("%d is negative\n",n);
	}
	printf("%d\n is ",n);
	
	return (0);
}
