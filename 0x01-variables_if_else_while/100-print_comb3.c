#include <stdio.h>
/**
 * Description: main - print all possible different commbinations of two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = '0'; b < 'b'; b++)
		if (a != b)
		{
			putchar(a, b);
			putchar(',');
			putchar(' ');

		}
	}
	putchar ('\n');
	return (0);
}
