#include <stdio.h>
/**
 * Description: main - prints all possible combinations os single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				putchar(a);
				putchar(',');
			}
		}
	}
	putchar ('\n');
	return (0);
}
