#include <stdio.h>
/**
 * Description: main - print out all numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar (a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
