#include <stdio.h>
/**
 * Description:main -print possible different combinations of 3 digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
			for (c = b + 1; c <= '9'; c++)
				if (a != b && a != c && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a < '8' && b <= '9' && c <= '9')
					{
						putchar(',');
						putchar(' ');
					}
				}

	}
	putchar('\n');
	return (0);
}
