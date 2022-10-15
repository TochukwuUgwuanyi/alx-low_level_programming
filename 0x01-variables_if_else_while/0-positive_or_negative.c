#include <stdlib.h>
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
		
		printf("n is positive\n");
	
	} else if( n == 0) {

		printf("n is zero\n");
	
	} else

	{
		printf("n is negative\n")
	}
	printf("value of n is : %d\n", n);
	
	return (0);
}
