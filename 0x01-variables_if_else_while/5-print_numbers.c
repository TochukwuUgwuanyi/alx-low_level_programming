#include <stdio.h>
/**
 * Description: main - print out numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		printf("\n");
		a = a + 1;
	}
	return (0);
}
