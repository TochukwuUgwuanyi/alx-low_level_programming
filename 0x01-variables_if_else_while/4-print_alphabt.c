#include <stdio.h>
/**
 * Description: main - print out lowercase alphabet except q&e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z' || a != 'q' || a != 'e'; a++)
	putchar (a);
	putchar ('\n');
	return (0);
}
