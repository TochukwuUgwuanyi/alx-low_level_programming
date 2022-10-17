#include <stdio.h>
/**
 * Description:main -print possible different commbinations of 2 digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = '0'; a < '8'; a++)
	{
		for (b = '0'; b < '8'; b++)
			if (a != b)
			{
				putchar(a);
                                putchar(b);
				putchar(',');
				putchar(' ');
			}
	}
	putchar ('\n');
	return (0);
}
