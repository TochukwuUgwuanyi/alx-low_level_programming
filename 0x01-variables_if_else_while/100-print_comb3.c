#include <stdio.h>
/**
 * Description:main -print possible different combinations of 2 digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;
	
	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
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
