#include <stdio.h>
/**
 * Description: main - print out lowercase/uppercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	putchar (a);
	putchar ('\n');
		for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	return (0);
}
