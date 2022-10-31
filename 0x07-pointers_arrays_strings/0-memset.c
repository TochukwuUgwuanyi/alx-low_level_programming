#include "main.h"
#include <string.h>
/**
 * *_memset -used to fill a memory with a particular value
 * @*s:  parameter for address of memory to be filled
 * @b: parameter to be filled
 * @n: maximum number bytes usable
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}

	return (s);
}

