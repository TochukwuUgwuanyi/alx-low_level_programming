#include <stdio.h>
/**
 * Description: main - print out lowercase alphabet except q&e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'd' || a <= 'f' || a <= 'r' || a <= 'z'; a++)
	putchar (a);
	putchar ('\n');
	return (0);
}
